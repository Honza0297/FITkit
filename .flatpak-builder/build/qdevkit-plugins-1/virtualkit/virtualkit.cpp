/***************************************************************************
 *   Copyright (C) 2010 Brno University of Technology,                     *
 *   Faculty of Information Technology                                     *
 *   Author(s): Zdenek Vasicek   <vasicek  AT fit.vutbr.cz>                *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Library General Public License as       *
 *   published by the Free Software Foundation; either version 2 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this program; if not, write to the                 *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.         *
 ***************************************************************************/

#include <qdevkit/plugin.h>
#include <qdevkit/connectiontabs.h>
#include <qdevkit/mainwindow.h>
#include "virtualkit.h"
#include "lcdchar.h"

#include <QPainter>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

#include <QMessageBox>   
#include <QApplication>
#include <QDialog>
#include <QSettings>
#include <QSpinBox>
#include <QDialogButtonBox>

VI::VI(QtAPI::IOChannel* channelA) : chan(channelA), m_active(ID), m_fsmstate(0), kb_state(0)
{
}

void VI::getCharacter(int id, char data[8])
{
   for (int i=0;i<8;i++) 
       data[i] = lcd_cgram[(id & 0x7) * 8 + i];
}

void VI::getLCDContent(char lcd[2*16])
{
/*
QString VI::getLCDContent()
{
   QString* s = new QString();
*/
   for (int i=0;i<16;i++) 
       lcd[i] = lcd_ddram[(i + lcd_ofs) & 0x3F];

   for (int i=0;i<16;i++)
       lcd[i+16] = lcd_ddram[0x40 + ((i + lcd_ofs) & 0x3F)];

//   return *s;
}

void VI::selectChannel(DbgChannel id)
{
   if (chan == 0) return;
   m_active = id;

   unsigned char pkt[3] = {0x82, id, 0xFF};
   chan->write((char *)&(pkt[0]), 3);
}

int VI::readByte(unsigned char* buffer, int count)
{
   unsigned char* pkt = new unsigned char[count+3];
   pkt[0] = 0x35;
   pkt[1] = (count-1) & 0xFF;
   pkt[2] = ((count - 1) >> 8) & 0xFF;
   for (int i=3;i<count+3;i++)
       pkt[i] = 0xFF;

   chan->write((char *)&(pkt[0]), count+3);
   delete [] pkt;

   int res = chan->read((char *)buffer, count, 1000); // timeout 1sec
   return res;
}

int VI::readWord(unsigned short* buffer, int count)
{
   unsigned char* pkt = new unsigned char[2*count+3];
   pkt[0] = 0x35;
   pkt[1] = (2*count-1) & 0xFF;
   pkt[2] = ((2*count - 1) >> 8) & 0xFF;
   for (int i=3;i<2*count+3;i++)
       pkt[i] = 0xFF;

   chan->write((char *)&(pkt[0]), 2*count+3);
   delete [] pkt;

   int res = chan->read((char *)&(buffer[0]), 2*count, 1000); // timeout 1sec
   for (int i=0;i < (res >> 1); i++) {
       buffer[i] = (buffer[i] << 8) | (buffer[i] >> 8); //byteswap
   }

   return res;
}

int VI::writeWord(unsigned short* buffer, int count)
{
   unsigned char* pkt = new unsigned char[2*count+3];
   pkt[0] = 0x35;
   pkt[1] = (2*count-1) & 0xFF;
   pkt[2] = ((2*count - 1) >> 8) & 0xFF;
   for (int i=0;i<count;i++) {
       pkt[3+2*i]  = (buffer[i] >> 8) & 0xFF;
       pkt[3+2*i+1] = (buffer[i]) & 0xFF;
	}

   chan->write((char *)&(pkt[0]), 2*count+3);
   delete [] pkt;

   int res = chan->read((char *)&(buffer[0]), 2*count, 1000); // timeout 1sec
   for (int i=0;i < (res >> 1); i++) {
       buffer[i] = (buffer[i] << 8) | (buffer[i] >> 8); //byteswap
   }

   return res;
}

void VI::btnStateChanged(const int active_btn, const bool active)
{
   if ((active_btn < 0) || (active_btn > 15)) return;

	int oldstate = kb_state;

	if (active) kb_state |= (1 << active_btn);
	if (!active) kb_state &= !(1 << active_btn);

	if (oldstate != kb_state) {
      //emit(log(QString("KB state:"+QString::number(kb_state,16))));
      m_kbqueue.enqueue(kb_state);
		//m_fsm_updkbstate = 1;
	}
}

void VI::finalize()
{
   if (chan == 0) return;

   chan->flush();
   chan->write("\x80\x00\x0B",3); //CS=0
   chan->setMode(0x00,0x00); //FTDI reset
   chan->close();

   chan = 0;
   m_fsmstate = 0;
   m_kbqueue.clear();
   led4_on = false;
}

void VI::initialize() 
{
   if (chan == 0) return;

      
   chan->open();

   chan->setMode(0x00,0x00); //FTDI reset mode
   chan->setMode(0x00,0x02); //FTDI MPSSE mode

   chan->write("\x86\x00\x00",3); //set clock divisor 6MHz
   chan->write("\x80\x00\x0B",3); //GPIOL nastavi horni polovinu jako vstup, dolni dle SPI, CS=0, CLK=0
   chan->write("\x82\x00\xFF",3); //GPIOH nastavi jako vystup a na hodnotu 00
   chan->flush();
   chan->write("\x80\x08\x0B",3); //GPIOL nastavi horni polovinu jako vstup, dolni dle SPI, CS=1

   m_kbqueue.clear();
   m_fsmstate = 1;

   lcd_ddram_addr = 0;
   lcd_cgram_addr = -1;
   lcd_ofs = 0;
   led4_on = false;

	lcd_mode_inc = 1;  //1 - increment, 0 - dekrement
	lcd_mode_dshift = 0; //shift entire display

   for (int i=0;i<128;i++) lcd_ddram[i] = 0xFF;
   for (int i=0;i<64;i++) lcd_cgram[i] = 0xFF;

   kb_state = 0;
}

int VI::irq()  
	// 0 - no IRQ,  
	// 1 - LCD, 
	// 2 - I/O, 
	// 4 - n/a, 
	// 8 - n/a
{

   if (chan == 0) return false;

   chan->write("\x81", 1);
   unsigned char status[16];
   int res = chan->read((char *)&(status[0]), 1);

	//0x10 - irq-io
	//0x20 - irq-lcd
	//0x40 - not (irq-lcd or irq-io)
	//
   //0x40 - nic; 0x10 - LED, 0x20 - LCD, 0x30 - LED + LCD
	
	if (res != 1) return 0;
   if ((status[0] & 0x70) == 0x30) return 1 | 2;
   if ((status[0] & 0x70) == 0x20) return 1;
   if ((status[0] & 0x70) == 0x10) return 2;
   return 0;
}

void VI::FSM()
{
   unsigned short buf[16];
	unsigned char cbuf[16];
   int res,rs,cmd, sig;

   switch (m_fsmstate) {
     case 1:
          //inicializovany, cekame na ID
          emit(log(QString("wait for ID")));

          selectChannel(VI::ID);
          res = readWord(buf, 8);

          if ((buf[0] == 0x7C91) && (buf[7] == 0x7C91)) {
             emit(log(QString("ID received, DBG active")));

             selectChannel(VI::IO);
             res = readByte(cbuf, 1);
             if (res == 1) 
                led4_on = cbuf[0] == 0;

             m_fsmstate = 2;
          }
          break;

     case 2:
			 //update stavu KB?
			 if (!m_kbqueue.isEmpty()) {
             selectChannel(VI::KB);
				 buf[0] = m_kbqueue.dequeue() & 0xFFFF;
             emit(log(QString("KB writeWord :"+QString::number(buf[0],16))));
				 res = writeWord(buf, 1);
			 }
          //testovani IRQ flagu
          if (sig = irq()) {

             if (sig & 2) {
 emit(log(QString("LED irq")));
                selectChannel(VI::IO);
                res = readByte(cbuf, 1);
                if (res == 1) {
//                   emit(log(QString((cbuf[0] == 0) ? "LED D4 ON": "LED D4 OFF")));
                   led4_on = cbuf[0] == 0;
					 }
                
				 }
             if (sig & 1) {
 emit(log(QString("LCD irq")));
                selectChannel(VI::LCD);
                res = readWord(buf, 16);
                for (int i=0;i<16;i++) {
                    if (buf[i] == 0xFFFF) continue;
   
                    cmd = buf[i] & 0xFF;
                    rs = (buf[i] >> 8) & 1;
   
                    if (rs == 1) {
                       if (lcd_cgram_addr >= 0) {
                          //emit(log(QString("LCD write cgram char:"+QString::number(cmd,16))));
                          lcd_cgram[lcd_cgram_addr] = cmd & 0xFF;
                       } else {
                          //emit(log(QString("LCD write ddram char:"+QString::number(cmd,16))));
                          lcd_ddram[lcd_ddram_addr] = cmd & 0xFF;
   							  if (lcd_mode_inc) {
                             lcd_ddram_addr = (lcd_ddram_addr + 1) & 0x7F;
   							  } else {
                             lcd_ddram_addr = (lcd_ddram_addr - 1) & 0x7F;
   							  }
                          /*							  
                           *							  TODO: lcd_mode_dshift
                          	lcd_mode_inc = 1;  //1 - increment, 0 - dekrement
                          	lcd_mode_dshift = 0; //shift entire display
                          */
                       }
                    } else {
                       if (cmd & 0x80) {
                          //emit(log(QString("LCD set DDRAM address:"+QString::number(cmd&0x7F,16))));
                          lcd_ddram_addr = cmd&0x7F;
                          lcd_cgram_addr = -1;
                       } else if (cmd & 0x40) {
                          //emit(log(QString("LCD set CGRAM address:"+QString::number(cmd&0x3F,16))));
                          lcd_cgram_addr = cmd&0x3F;
                          lcd_ddram_addr = -1;
                       } else if (cmd & 0x20) {
                          emit(log(QString("LCD function set:"+QString::number(cmd & 0x1F,16))));
                       } else if (cmd & 0x10) {
                          emit(log(QString("LCD Cursor or Display Shift:"+QString::number(cmd & 0x0F,16))));
                          lcd_ofs += 1;
                          if (lcd_ofs > 39) lcd_ofs = 0;
                       } else if (cmd & 0x08) {
                          emit(log(QString("LCD Display On/Off Control:"+QString::number(cmd & 0x07,16))));
                       } else if (cmd & 0x04) {
                          emit(log(QString("LCD Entry Mode Set:"+QString::number(cmd & 0x03,16))));
   							  lcd_mode_inc = (cmd & 0x02) ? 1 : 0;
   							  lcd_mode_dshift = (cmd & 0x01);
                       } else if (cmd & 0x02) {
                          emit(log(QString("LCD Cursor At Home")));
                       } else if (cmd & 0x01) {
                          emit(log(QString("LCD Clear display")));
                          for (int i=0;i<128;i++) lcd_ddram[i] = ' ';
                       } else {
                          emit(log(QString("LCD cmd:"+QString::number(buf[i],16))));
                       }
                    }
					   }
               }
          }
          break;

   }       
}

bool VI::isLEDon(int id)
{
  if (id == 4) return led4_on;
  return false;
}


Kit::Kit()
{
   m_upd = 0;
   led4_on = false;
/*
        btn_chars = {'1','2','3','A',
                '4','5','6','B',
                '7','8','9','C',
                '*','0','#','D'};
*/   
   for (int j=0;j<256;j++)
      for (int i=0;i<8;i++)
          lcd_charmap[j][i] = charmap[j][i];

   for (int j=0;j<2*16;j++)
       lcd_string[j] = 0xFF;

   active_btn = -1;
   isMousedown = 0;

   svg_render = new QSvgRenderer(QString(":/data/fitkit.svg"));
   svg_rect = svg_render->viewBoxF();

   if (svg_render->elementExists("ledD4")) {
      led4_matrix = svg_render->matrixForElement("ledD4");
      led4_rect = led4_matrix.mapRect(svg_render->boundsOnElement("ledD4"));
	}

   if (svg_render->elementExists("lcddisplaycontent")) {

      lcd_matrix = svg_render->matrixForElement("lcddisplaycontent");
      lcd_rect = lcd_matrix.mapRect(svg_render->boundsOnElement("lcddisplaycontent"));

      for (int j=0;j<4;j++)
        for (int i=0;i<4;i++) {
            btn_matrixes[j*4 + i] = svg_render->matrixForElement("btn_"+QString::number(j)+"_"+QString::number(i));
            btn_rects[j*4 + i] = btn_matrixes[j*4 + i].mapRect(svg_render->boundsOnElement("btn_"+QString::number(j)+"_"+QString::number(i)));
            btn_visible_rects[j*4 + i].setWidth(0);
            btn_visible_rects[j*4 + i].setHeight(0);
        }
   }
   setMouseTracking(true);
   setMinimumSize(320,420);
}

void Kit::setLED(int id, bool on)
{
	bool upd = false;
	if (id == 4) {
		if (led4_on != on) {
         led4_on = on;
			upd = true;
		}
	}

	if (upd)
      update();
}

void Kit::setCharacter(int id, unsigned char data[8])
{
   for (int i=0; i < 8; i++) {
       lcd_charmap[id & 0xF][i] = data[i];
   }
   update();
}

void Kit::setLCDString(const QString& s)
{
    for (int i=0; i < 2*16; i++) {
        if (s.length() == i) break;
        lcd_string[i] = s[i].toAscii();
    }        
    update();
}

void Kit::paintEvent(QPaintEvent * event)
{
    QWidget::paintEvent(event);
    QRectF kitrect(0,0,300,400);
    kitrect.translate(10, 10);
    QMatrix m;
    m.reset();
    m.translate(kitrect.x(), kitrect.y());
    m.scale(kitrect.width()/(double)(svg_rect.width()), kitrect.height()/(double)(svg_rect.height()));
    QRectF lcd = m.mapRect(lcd_rect);

    QPainter p(this);
//    p.setOpacity(0.25);
    svg_render->render(&p, kitrect);
//    lcd = *lcd_rect;
//    lcd = *lcd_rect;
//    QRectF lcd = lcd_rect;
//    p.fillRect(lcd, QBrush(QColor(255,128,0,128)));

      double dx = lcd.width() / (15 * 6 + 5);
      double dy = lcd.height() / (9 + 8);

      p.setRenderHint(QPainter::Antialiasing);

      for (int row=0;row<2;row++)
          for (int col=0;col<16;col++)
              for (int x=0;x<5;x++)
                 for (int y=0;y<8;y++)
                 {
                     double sx = lcd.left() + (col*6 + x) * dx;
                     double sy = lcd.top() + (row*9 + y) * dy;

                     if (lcd_charmap[(unsigned char)lcd_string[row*16 + col]][y] & (1 << (4-x))) 
                     {
                        p.fillRect(QRectF(sx,sy, dx, dy), QBrush(QColor("#444444")));
                     }
                 }

    p.setRenderHint(QPainter::Antialiasing, false);


//    QPen ledpen;
//    ledpen.setWidth(1);
//    ledpen.setColor(QColor(255,0,0));
	 QRectF led4 = m.mapRect(led4_rect);
//    p.setPen(ledpen);
    if (led4_on)
       p.fillRect(led4, QBrush(QColor(255,0,0,255)));


    QPen selpen;
    selpen.setWidth(4);
    selpen.setColor(QColor(255,180,180));

    p.setPen(selpen);
   
    for (int i=0;i<16;i++) {
        btn_visible_rects[i] = m.mapRect(btn_rects[i]);

        if (active_btn != i) continue;
        p.drawRect(btn_visible_rects[i]);

        if (isMousedown)
           p.fillRect(btn_visible_rects[i], QBrush(QColor(255,180,180,128)));
    }

    QPen txtpen;
    txtpen.setColor(QColor(255,0,0));
    p.setPen(txtpen);
    p.drawText(10,10, dbg);
}

void Kit::mouseMoveEvent(QMouseEvent * event) 
{
    if (isMousedown) return;

    QPoint mouse = QPoint(event->x(), event->y());

    int selbtn = -1;
    for (int i=0;i<16;i++) {
        if ((btn_visible_rects[i].isValid()) && (btn_visible_rects[i].contains(mouse))) {
           selbtn = i;
        }
    }

    if (active_btn == selbtn) return;

    active_btn = selbtn;
    repaint();
}


void Kit::mousePressEvent(QMouseEvent * event)
{
    if (active_btn != -1) {
       isMousedown = 1;

       emit(btnStateChanged(active_btn, true));
       repaint();
    }
}

void Kit::mouseReleaseEvent(QMouseEvent * event)
{
    if (active_btn != -1) {
       emit(btnStateChanged(active_btn, false));
	 }

    isMousedown = 0;
    repaint();
}


MyCameraWindow::MyCameraWindow(QWidget *parent) : QWidget(parent) {

	QVBoxLayout* lt = new QVBoxLayout();

	m_btn = new QPushButton("Camera (start)");
   connect(m_btn, SIGNAL(clicked()), this, SLOT(btnClicked()));
	lt->addWidget(m_btn);

#ifdef HAS_OPENCV
	camera = 0;
   cvwidget = new QOpenCVWidget(this);
   lt->addWidget(cvwidget);
	cvwidget->hide();
   setLayout(lt);
#endif

   QSettings set;
   startTimer(set.value("VirtualKit/RefreshCam", 500).toInt());
}

MyCameraWindow::~MyCameraWindow() {
#ifdef HAS_OPENCV
    if (camera) {
       cvReleaseCapture(&camera);
		 camera = 0;
    }	
#endif
}

void MyCameraWindow::timerEvent(QTimerEvent*) {
#ifdef HAS_OPENCV
    if (camera) {
       IplImage *image=cvQueryFrame(camera);
       cvwidget->putImage(image);
    }		  
#endif
}

void MyCameraWindow::btnClicked()
{
    m_btn->setText("Camera (start)");
#ifdef HAS_OPENCV
    if (camera) {
       cvwidget->hide();
		 cvReleaseCapture(&camera);
		 camera = 0;
		 return;
    }

    camera = cvCreateCameraCapture(-1);
	 if (!camera) return;

    IplImage * image = cvQueryFrame(camera);
    if (!image) return;
#endif
    m_btn->setText("Camera (stop)");
    cvwidget->show();
}


VirtualKit::VirtualKit()
   : QObject(), PluginInterface(), m_dock(0), m_timerid(-1), mIsLoaded(false)
{
   m_wdgt = new QWidget();
   QVBoxLayout* lt = new QVBoxLayout(m_wdgt);
   m_kit = new Kit();
   m_log = new QTextBrowser();
   lt->addWidget(m_kit);
#ifdef HAS_OPENCV
	lt->addWidget(new MyCameraWindow());
#endif	
   lt->addWidget(m_log);
}


bool VirtualKit::isLoaded()
{
   return mIsLoaded;
}

void VirtualKit::timerEvent(QTimerEvent *event)
{
  if (m_timerid == -1) return;
  char buf[32];
  foreach (VI* val, m_mondevices) {
     val->FSM();
     //m_log->append("t");
     val->getLCDContent(buf);

     m_kit->disableUpdate();
     m_kit->setLCDString(buf);

     for (int i=0;i<8;i++) {
        val->getCharacter(i, buf);
        m_kit->setCharacter(i, (unsigned char*) buf);
        m_kit->setCharacter(i+8, (unsigned char*) buf);
     }

	  for (int i=0;i<5;i++) {
         m_kit->setLED(i, val->isLEDon(i));
	  }

     m_kit->enableUpdate(true);
  }
}
 

void VirtualKit::updateTimer()
{

 if (m_mondevices.count() == 0) 
 {
    if (m_timerid != -1) 
        killTimer(m_timerid);
    m_timerid = -1;
 } 
 else
 {
    if (m_timerid == -1)  {
      QSettings set;
      m_timerid = startTimer(set.value("VirtualKit/RefreshKit", 250).toInt()); //250ms
	 }
 }

}

int VirtualKit::load()
{
   // Create DockWidget
   m_dock = new QDockWidget(tr("Control panel"));
   m_dock->setObjectName("ControlPanel");
   m_dock->setWidget(m_wdgt);
//   m_widget->setLayout(lt);

//   lt->addWidget(m_log);


   // Set up signals
   ConnectionTabs* tabs = mainWindow().tabs();
   connect(tabs, SIGNAL(connectionCreated(int)), this, SLOT(connectionCreated(int)));
   connect(tabs, SIGNAL(connectionChanged(int)), this, SLOT(connectionChanged(int)));
   connect(tabs, SIGNAL(connectionClosed(int)),  this, SLOT(connectionClosed(int)));

   // Add DockWidget
   mainWindow().addToDock(Qt::LeftDockWidgetArea, m_dock);
   mainWindow().restoreSettings();

   // Update state
   mIsLoaded = true;
   return true;
}

int VirtualKit::unload()
{
   // Update state
   mIsLoaded = false;

   // Set up signals
   ConnectionTabs* tabs = mainWindow().tabs();
   disconnect(tabs, SIGNAL(connectionCreated(int)), this, SLOT(connectionCreated(int)));
   disconnect(tabs, SIGNAL(connectionChanged(int)), this, SLOT(connectionChanged(int)));
   disconnect(tabs, SIGNAL(connectionClosed(int)),  this, SLOT(connectionClosed(int)));

   if (m_dock) {
      delete m_dock;
      m_dock = 0;
   }

   foreach (VI* val, m_mondevices) {
      val->finalize();
   }
   m_mondevices.clear();
   updateTimer();

   return true;
}

int VirtualKit::configure()
{
    // Prepare container
    QSettings set;
    QDialog dlg;
    dlg.setWindowTitle(tr("Configure"));
    dlg.setWindowIcon(QIcon(":/icons/32x32/device-network.png"));

    // Add widgets
    QVBoxLayout* dlgLayout = new QVBoxLayout(&dlg);
    QGridLayout* lt = new QGridLayout;

	 QLabel* lbKit = new QLabel(tr("Refresh FITkit (ms):"));
    lt->addWidget(lbKit, 0, 0);

	 QSpinBox* sbKit = new QSpinBox;
    sbKit->setRange(1, 5000);
    sbKit->setValue(set.value("VirtualKit/RefreshKit", 250).toInt());
    lt->addWidget(sbKit, 0,1);

	 QLabel* lbCam = new QLabel(tr("Refresh Camera (ms):"));
    lt->addWidget(lbCam, 1, 0);

	 QSpinBox* sbCam = new QSpinBox;
    sbCam->setRange(1, 5000);
    sbCam->setValue(set.value("VirtualKit/RefreshCam", 500).toInt());
    lt->addWidget(sbCam, 1, 1);

	 dlgLayout->addLayout(lt);

    // Add buttons
    QDialogButtonBox* buttons = new QDialogButtonBox;
    buttons->addButton(QDialogButtonBox::Ok);
    buttons->addButton(QDialogButtonBox::Cancel);
    connect(buttons, SIGNAL(accepted()), &dlg, SLOT(accept()));
    connect(buttons, SIGNAL(rejected()), &dlg, SLOT(reject()));
    dlgLayout->addWidget(buttons);

    // Run dialog
    if (dlg.exec() != QDialog::Accepted)
       return false;

    set.setValue("VirtualKit/RefreshKit", sbKit->value());
    set.setValue("VirtualKit/RefreshCam", sbCam->value());

	
    return true;
}

void VirtualKit::log(const QString& str)
{
   if (m_log != 0)
      m_log->append(str);
}


void VirtualKit::connectionCreated(int deviceId)
{
    if (m_mondevices.contains(deviceId)) return;

    ConnectionTabs* tabs = mainWindow().tabs();
    Connection* conn = tabs->connectionFromDeviceId(deviceId);

    VI* vi =  new VI(conn->channel(Connection::ChannelA));
    connect(vi, SIGNAL(log(const QString&)), this, SLOT(log(const QString&)));
    connect(m_kit, SIGNAL(btnStateChanged(const int, const bool)), vi, SLOT(btnStateChanged(const int, const bool)));

    vi->initialize();

    m_log->append("VirtualKit::connectionCreated() device #"+ QString::number(deviceId));

    m_mondevices.insert(deviceId,vi);
    updateTimer();
}

void VirtualKit::connectionChanged(int deviceId)
{
//    ConnectionTabs* tabs = mainWindow().tabs();
//    Connection* conn = tabs->connectionFromDeviceId(deviceId);
//    m_kit->setLCDString("connectionChanged");
    m_log->append("VirtualKit::connectionChanged() to device #"+ QString::number(deviceId));
}

void VirtualKit::connectionClosed(int deviceId)
{
//    ConnectionTabs* tabs = mainWindow().tabs();
//    Connection* conn = tabs->connectionFromDeviceId(deviceId);
//    m_kit->setLCDString("connectionClosed");
    m_log->append("VirtualKit::connectionClosed() device #"+ QString::number(deviceId));

    if (m_mondevices.contains(deviceId)) {
       m_mondevices[deviceId]->finalize();
       m_mondevices.take(deviceId);
       updateTimer();
    }
    
}



Q_EXPORT_PLUGIN2(pnp_VirtualKit, VirtualKit)

#include "virtualkit.moc"
