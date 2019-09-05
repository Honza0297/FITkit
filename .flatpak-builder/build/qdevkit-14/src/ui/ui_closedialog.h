/********************************************************************************
** Form generated from reading UI file 'closedialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOSEDIALOG_H
#define UI_CLOSEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CloseDialog
{
public:
    QDialogButtonBox *btDlgControl;
    QLabel *lbIcon;
    QCheckBox *cbDontAsk;
    QLabel *lbReason;

    void setupUi(QDialog *CloseDialog)
    {
        if (CloseDialog->objectName().isEmpty())
            CloseDialog->setObjectName(QString::fromUtf8("CloseDialog"));
        CloseDialog->setWindowModality(Qt::ApplicationModal);
        CloseDialog->resize(370, 166);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/22x22/state-failed.png"), QSize(), QIcon::Normal, QIcon::Off);
        CloseDialog->setWindowIcon(icon);
        btDlgControl = new QDialogButtonBox(CloseDialog);
        btDlgControl->setObjectName(QString::fromUtf8("btDlgControl"));
        btDlgControl->setGeometry(QRect(190, 130, 171, 32));
        btDlgControl->setOrientation(Qt::Horizontal);
        btDlgControl->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        btDlgControl->setCenterButtons(false);
        lbIcon = new QLabel(CloseDialog);
        lbIcon->setObjectName(QString::fromUtf8("lbIcon"));
        lbIcon->setGeometry(QRect(10, 20, 51, 51));
        lbIcon->setPixmap(QPixmap(QString::fromUtf8(":/icons/48x48/exit.png")));
        cbDontAsk = new QCheckBox(CloseDialog);
        cbDontAsk->setObjectName(QString::fromUtf8("cbDontAsk"));
        cbDontAsk->setGeometry(QRect(10, 130, 141, 23));
        lbReason = new QLabel(CloseDialog);
        lbReason->setObjectName(QString::fromUtf8("lbReason"));
        lbReason->setGeometry(QRect(70, 20, 281, 101));
        lbReason->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbReason->setWordWrap(true);

        retranslateUi(CloseDialog);
        QObject::connect(btDlgControl, SIGNAL(accepted()), CloseDialog, SLOT(accept()));
        QObject::connect(btDlgControl, SIGNAL(rejected()), CloseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CloseDialog);
    } // setupUi

    void retranslateUi(QDialog *CloseDialog)
    {
        CloseDialog->setWindowTitle(QApplication::translate("CloseDialog", "Quit?", 0, QApplication::UnicodeUTF8));
        lbIcon->setText(QString());
        cbDontAsk->setText(QApplication::translate("CloseDialog", "Do not ask again", 0, QApplication::UnicodeUTF8));
        lbReason->setText(QApplication::translate("CloseDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bitstream Vera Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Do you really want to quit?</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"><span style=\" font-weight:400;\">Exiting can result in losing sessions, that you didn't save.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CloseDialog: public Ui_CloseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSEDIALOG_H
