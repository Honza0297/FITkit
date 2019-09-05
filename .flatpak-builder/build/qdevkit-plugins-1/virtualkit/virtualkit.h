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

#ifndef VIRTUALKIT_H
#define VIRTUALKIT_H

#include <qdevkit/plugininterfaces.h>
#include <QDockWidget>
#include <QTextBrowser>
#include <QWidget>
#include <QTimer>
#include <QQueue> 

class Kit;

class VI : public QObject
{
    Q_OBJECT

private:
    QtAPI::IOChannel* chan;
    int m_active;
    int m_fsmstate;
	 int m_fsm_updkbstate;
    unsigned char lcd_ddram[128];
    unsigned char lcd_cgram[64];
    int lcd_ddram_addr;
    int lcd_cgram_addr;
    int lcd_ofs;
	 int lcd_mode_inc, lcd_mode_dshift;
	 int kb_state;
	 bool led4_on;
    QQueue<int> m_kbqueue;

	 
public:
    
    enum DbgChannel { ID  = 1,
                      LCD = 2,
							 KB  = 3,
							 IO  = 0
                    };

    VI(QtAPI::IOChannel* channelA);
    void initialize();
    void finalize();
    void selectChannel(DbgChannel id);    
    int readByte(unsigned char* buffer, int count);
    int readWord(unsigned short* buffer, int count);
    int writeWord(unsigned short* buffer, int count);
    int irq();

    void FSM();
    void getLCDContent(char lcd[2*16]);
    void getCharacter(int id, char data[8]);
    bool isLEDon(int id);

signals:
    void log(const QString& s);

private slots:	 
	 void btnStateChanged(const int active_btn, const bool active);
    
};

#ifdef HAS_OPENCV
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include "QOpenCVWidget.h"
#endif
#include <QPushButton>

class MyCameraWindow : public QWidget
{
    Q_OBJECT
    private:
#ifdef HAS_OPENCV
        QOpenCVWidget *cvwidget;
        CvCapture *camera;
#endif
        QPushButton *m_btn;

    public:
        MyCameraWindow(QWidget *parent=0);
        ~MyCameraWindow();
         
    private slots:
        void btnClicked();

	 protected:
        void timerEvent(QTimerEvent*);        
};
 

class VirtualKit : public QObject, public PluginInterface
{
    Q_OBJECT
    Q_INTERFACES(PluginInterface)

private:
    QDockWidget* m_dock;
    QWidget* m_wdgt;
    Kit* m_kit;
    QTextBrowser* m_log;
#ifdef HAS_OPENCV
    CvCapture * camera;
#endif
    QMap<int, VI*> m_mondevices;
    int m_timerid;
    bool mIsLoaded;
    void updateTimer();

public:
    VirtualKit();

    bool isLoaded();
    int load();
    int unload();
    int configure();

private slots:
    void connectionCreated(int deviceId);
    void connectionChanged(int deviceId);
    void connectionClosed(int deviceId);
    void timerEvent(QTimerEvent *event);
    void log(const QString& str);
};

#include <QWidget>    
#include <QRect>
#include <QMouseEvent>
#include <QSvgRenderer>    

class Kit : public QWidget
{
    Q_OBJECT

private:
    QSvgRenderer* svg_render;
    QMatrix lcd_matrix, led4_matrix;
    QRectF lcd_rect, led4_rect;
    QRectF svg_rect;
    int m_upd;
	 bool led4_on;
//    char btn_chars[16];
    unsigned char lcd_string[2*16];
    unsigned char lcd_charmap[256][8];
    QRectF btn_rects[16];
    QRectF btn_visible_rects[16];
    int active_btn;
    int isMousedown;
    QMatrix btn_matrixes[16];
    QString dbg;

public:
    Kit();
    void setLCDString(const QString& str);
    void setLED(int id, bool on);
    void setCharacter(int id, unsigned char data[8]);
    void disableUpdate() { m_upd--; };
    void enableUpdate(bool refresh) { m_upd++; if (refresh) update(); };
    void update() { if (m_upd == 0) repaint(); };

protected:
   void paintEvent(QPaintEvent * event);
   void mouseMoveEvent(QMouseEvent * event);
   void mousePressEvent(QMouseEvent * event);
   void mouseReleaseEvent(QMouseEvent * event);

signals:	 
   void btnStateChanged(const int active_btn, const bool active);	
};
#endif
