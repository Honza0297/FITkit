
#include "QOpenCVWidget.h"

// Constructor
QOpenCVWidget::QOpenCVWidget(QWidget *parent) : QWidget(parent) {
    layout = new QVBoxLayout;
    imagelabel = new QLabel;
    QImage dummy(320,240,QImage::Format_RGB32);
    image = dummy;
    layout->addWidget(imagelabel);
    for (int x = 0; x < 320; x ++) {
        for (int y =0; y < 240; y++) {
            image.setPixel(x,y,qRgb(0,0,0));
//            image.setPixel(x,y,qRgb(x, y, y));
        }
    }
    imagelabel->setPixmap(QPixmap::fromImage(image));

    setLayout(layout);
}

QOpenCVWidget::~QOpenCVWidget(void) {
    
}

void QOpenCVWidget::putImage(IplImage *cvimage) {
    int cvIndex, cvLineStart, ww = 0, hh = 0;
	 int divd = 1;

    // switch between bit depths
    switch (cvimage->depth) {
        case IPL_DEPTH_8U:
            switch (cvimage->nChannels) {
                case 3:
						  ww = cvimage->width / divd; 
						  hh = cvimage->height / divd;

                    if ( (ww != image.width()) || (hh != image.height()) ) {
                        QImage temp(ww, hh, QImage::Format_RGB32);
                        image = temp;
                    }
                    cvIndex = 0; cvLineStart = 0;
                    for (int y = 0; y < hh; y++) {
                        unsigned char red,green,blue;
                        cvIndex = cvLineStart;
                        for (int x = 0; x < ww; x++) {
                            // DO it
                            red = cvimage->imageData[cvIndex+2];
                            green = cvimage->imageData[cvIndex+1];
                            blue = cvimage->imageData[cvIndex+0];
                            
                            image.setPixel(x,y,qRgb(red, green, blue));

									 cvIndex += 3*divd;
                        }
                        cvLineStart += divd*cvimage->widthStep;                      
                    }
                    break;
                default:
                    qDebug("This number of channels is not supported\n");
                    break;
            }
            break;
        default:
            qDebug("This type of IplImage is not implemented in QOpenCVWidget\n");
            break;
    }

	 if ((ww > 0) && (hh > 0))
       imagelabel->setPixmap(QPixmap::fromImage(image.scaled(ww/2, hh/2, Qt::IgnoreAspectRatio, Qt::SmoothTransformation)));    
}

