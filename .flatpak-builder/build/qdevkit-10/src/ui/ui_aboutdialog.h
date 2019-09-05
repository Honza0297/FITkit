/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QPushButton *btClose;
    QTabWidget *tabList;
    QWidget *tabAbout;
    QHBoxLayout *horizontalLayout;
    QLabel *lbDesc;
    QWidget *tabAuthors;
    QVBoxLayout *verticalLayout;
    QScrollArea *saAuthors;
    QWidget *saAuthorsWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbAuthors;
    QWidget *tabThanks;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *saThanks;
    QWidget *saThanksWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *lbThanks;
    QLabel *lbIcon;
    QLabel *lbHeading;
    QLabel *lbVersion;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->setWindowModality(Qt::ApplicationModal);
        AboutDialog->resize(450, 380);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setMinimumSize(QSize(450, 380));
        AboutDialog->setMaximumSize(QSize(550, 428));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/22x22/qdevkit.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutDialog->setWindowIcon(icon);
        AboutDialog->setModal(true);
        btClose = new QPushButton(AboutDialog);
        btClose->setObjectName(QString::fromUtf8("btClose"));
        btClose->setGeometry(QRect(340, 335, 101, 35));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        font.setKerning(false);
        btClose->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/22x22/bt-cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btClose->setIcon(icon1);
        btClose->setIconSize(QSize(16, 16));
        btClose->setDefault(true);
        tabList = new QTabWidget(AboutDialog);
        tabList->setObjectName(QString::fromUtf8("tabList"));
        tabList->setGeometry(QRect(10, 80, 431, 251));
        QFont font1;
        font1.setPointSize(10);
        tabList->setFont(font1);
        tabList->setTabShape(QTabWidget::Rounded);
        tabList->setElideMode(Qt::ElideNone);
        tabList->setUsesScrollButtons(true);
        tabAbout = new QWidget();
        tabAbout->setObjectName(QString::fromUtf8("tabAbout"));
        horizontalLayout = new QHBoxLayout(tabAbout);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbDesc = new QLabel(tabAbout);
        lbDesc->setObjectName(QString::fromUtf8("lbDesc"));
        lbDesc->setTextFormat(Qt::AutoText);
        lbDesc->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbDesc->setWordWrap(false);
        lbDesc->setMargin(10);
        lbDesc->setOpenExternalLinks(true);

        horizontalLayout->addWidget(lbDesc);

        tabList->addTab(tabAbout, QString());
        tabAuthors = new QWidget();
        tabAuthors->setObjectName(QString::fromUtf8("tabAuthors"));
        verticalLayout = new QVBoxLayout(tabAuthors);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        saAuthors = new QScrollArea(tabAuthors);
        saAuthors->setObjectName(QString::fromUtf8("saAuthors"));
        saAuthors->setFrameShape(QFrame::NoFrame);
        saAuthors->setFrameShadow(QFrame::Plain);
        saAuthors->setWidgetResizable(true);
        saAuthorsWidget = new QWidget();
        saAuthorsWidget->setObjectName(QString::fromUtf8("saAuthorsWidget"));
        saAuthorsWidget->setGeometry(QRect(0, 0, 407, 204));
        verticalLayout_2 = new QVBoxLayout(saAuthorsWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lbAuthors = new QLabel(saAuthorsWidget);
        lbAuthors->setObjectName(QString::fromUtf8("lbAuthors"));
        lbAuthors->setAutoFillBackground(false);
        lbAuthors->setScaledContents(true);
        lbAuthors->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbAuthors->setWordWrap(false);
        lbAuthors->setIndent(0);
        lbAuthors->setOpenExternalLinks(true);
        lbAuthors->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        verticalLayout_2->addWidget(lbAuthors);

        saAuthors->setWidget(saAuthorsWidget);

        verticalLayout->addWidget(saAuthors);

        tabList->addTab(tabAuthors, QString());
        tabThanks = new QWidget();
        tabThanks->setObjectName(QString::fromUtf8("tabThanks"));
        verticalLayout_3 = new QVBoxLayout(tabThanks);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        saThanks = new QScrollArea(tabThanks);
        saThanks->setObjectName(QString::fromUtf8("saThanks"));
        saThanks->setFrameShape(QFrame::NoFrame);
        saThanks->setWidgetResizable(true);
        saThanksWidget = new QWidget();
        saThanksWidget->setObjectName(QString::fromUtf8("saThanksWidget"));
        saThanksWidget->setGeometry(QRect(0, 0, 407, 204));
        verticalLayout_4 = new QVBoxLayout(saThanksWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lbThanks = new QLabel(saThanksWidget);
        lbThanks->setObjectName(QString::fromUtf8("lbThanks"));
        lbThanks->setScaledContents(false);
        lbThanks->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbThanks->setWordWrap(true);

        verticalLayout_4->addWidget(lbThanks);

        saThanks->setWidget(saThanksWidget);

        verticalLayout_3->addWidget(saThanks);

        tabList->addTab(tabThanks, QString());
        lbIcon = new QLabel(AboutDialog);
        lbIcon->setObjectName(QString::fromUtf8("lbIcon"));
        lbIcon->setGeometry(QRect(10, 0, 71, 71));
        lbIcon->setPixmap(QPixmap(QString::fromUtf8(":/icons/64x64/qdevkit.png")));
        lbHeading = new QLabel(AboutDialog);
        lbHeading->setObjectName(QString::fromUtf8("lbHeading"));
        lbHeading->setGeometry(QRect(90, 20, 201, 20));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        lbHeading->setFont(font2);
        lbVersion = new QLabel(AboutDialog);
        lbVersion->setObjectName(QString::fromUtf8("lbVersion"));
        lbVersion->setGeometry(QRect(90, 50, 201, 20));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        lbVersion->setFont(font3);

        retranslateUi(AboutDialog);
        QObject::connect(btClose, SIGNAL(clicked()), AboutDialog, SLOT(accept()));

        tabList->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About", 0, QApplication::UnicodeUTF8));
        btClose->setText(QApplication::translate("AboutDialog", "Close", 0, QApplication::UnicodeUTF8));
        lbDesc->setText(QApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Bitstream Vera Sans'; font-size:9pt; font-weight:600;\">FITKit development toolkit</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Bitstream Vera Sans'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Bitstream Vera Sans'; font-size:9pt;\">Licensed under GNU/GPL v2.</span></p>\n"
"<"
                        "p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Bitstream Vera Sans'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Bitstream Vera Sans'; font-size:9pt;\">(C) 2008/2012 Marek Vavru\305\241a, Zden\304\233k Va\305\241\303\255\304\215ek</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Bitstream Vera Sans'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.fit.vutbr.cz/fitkit\"><span style=\" font-family:'Bitstream Vera Sans'; font-size:9pt; text-decoration: underline; color:#0057ae;\">http://www.fit.vutbr.cz/kit</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabList->setTabText(tabList->indexOf(tabAbout), QApplication::translate("AboutDialog", "&About", 0, QApplication::UnicodeUTF8));
        lbAuthors->setText(QApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Bitstream Vera Sans';\">Please use </span><a href=\"http://merlin.fit.vutbr.cz/FITkit/forum.html\"><span style=\" text-decoration: underline; color:#0000ff;\">FITkit forum</span></a><span style=\" font-family:'Bitstream Vera Sans';\"> to report bugs.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Bitstream Vera Sans';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0"
                        "px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Bitstream Vera Sans';\">Marek Vavru\305\241a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Bitstream Vera Sans';\">   </span><a href=\"mailto:marek@vavrusa.com\"><span style=\" font-family:'Bitstream Vera Sans'; text-decoration: underline; color:#0057ae;\">marek@vavrusa.com</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Bitstream Vera Sans';\">   Maintainer and developer</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Bitstream Vera Sans';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" "
                        "font-family:'Bitstream Vera Sans';\">Zden\304\233k Va\305\241\303\255\304\215ek</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Bitstream Vera Sans';\">   </span><a href=\"mailto:vasicek@fit.vutbr.cz\"><span style=\" font-family:'Bitstream Vera Sans'; text-decoration: underline; color:#0057ae;\">vasicek@fit.vutbr.cz</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Bitstream Vera Sans';\">   Maintainer and developer</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabList->setTabText(tabList->indexOf(tabAuthors), QApplication::translate("AboutDialog", "Au&thors", 0, QApplication::UnicodeUTF8));
        lbThanks->setText(QApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bitstream Vera Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Jan Vavru\305\241a</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    <a href=\"mailto:jan@vavrusa.com\"><span style=\" text-decoration: underline; color:#0057ae;\">jan@vavrusa.com</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    Application graphics</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inde"
                        "nt:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Oxygen team</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    <a href=\"http://www.oxygen-icons.org/\"><span style=\" text-decoration: underline; color:#0057ae;\">www.oxygen-icons.org</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    Application iconset</p></body></html>", 0, QApplication::UnicodeUTF8));
        tabList->setTabText(tabList->indexOf(tabThanks), QApplication::translate("AboutDialog", "Thank&s to", 0, QApplication::UnicodeUTF8));
        lbIcon->setText(QString());
        lbHeading->setText(QApplication::translate("AboutDialog", "QDevKit", 0, QApplication::UnicodeUTF8));
        lbVersion->setText(QApplication::translate("AboutDialog", "Version X.X.X", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
