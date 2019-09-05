/********************************************************************************
** Form generated from reading UI file 'rebuilddialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REBUILDDIALOG_H
#define UI_REBUILDDIALOG_H

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

class Ui_RebuildDialog
{
public:
    QDialogButtonBox *btDlgControl;
    QLabel *lbIcon;
    QCheckBox *cbDontAsk;
    QLabel *lbReason;

    void setupUi(QDialog *RebuildDialog)
    {
        if (RebuildDialog->objectName().isEmpty())
            RebuildDialog->setObjectName(QString::fromUtf8("RebuildDialog"));
        RebuildDialog->setWindowModality(Qt::ApplicationModal);
        RebuildDialog->resize(424, 156);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/22x22/state-failed.png"), QSize(), QIcon::Normal, QIcon::Off);
        RebuildDialog->setWindowIcon(icon);
        btDlgControl = new QDialogButtonBox(RebuildDialog);
        btDlgControl->setObjectName(QString::fromUtf8("btDlgControl"));
        btDlgControl->setGeometry(QRect(180, 120, 221, 32));
        btDlgControl->setOrientation(Qt::Horizontal);
        btDlgControl->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::No|QDialogButtonBox::Yes);
        btDlgControl->setCenterButtons(false);
        lbIcon = new QLabel(RebuildDialog);
        lbIcon->setObjectName(QString::fromUtf8("lbIcon"));
        lbIcon->setGeometry(QRect(10, 20, 51, 51));
        lbIcon->setPixmap(QPixmap(QString::fromUtf8(":/icons/48x48/applications-update.png")));
        cbDontAsk = new QCheckBox(RebuildDialog);
        cbDontAsk->setObjectName(QString::fromUtf8("cbDontAsk"));
        cbDontAsk->setGeometry(QRect(10, 120, 141, 23));
        lbReason = new QLabel(RebuildDialog);
        lbReason->setObjectName(QString::fromUtf8("lbReason"));
        lbReason->setGeometry(QRect(80, 20, 331, 91));
        lbReason->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbReason->setWordWrap(true);

        retranslateUi(RebuildDialog);
        QObject::connect(btDlgControl, SIGNAL(accepted()), RebuildDialog, SLOT(accept()));
        QObject::connect(btDlgControl, SIGNAL(rejected()), RebuildDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RebuildDialog);
    } // setupUi

    void retranslateUi(QDialog *RebuildDialog)
    {
        RebuildDialog->setWindowTitle(QApplication::translate("RebuildDialog", "Quit?", 0, QApplication::UnicodeUTF8));
        lbIcon->setText(QString());
        cbDontAsk->setText(QApplication::translate("RebuildDialog", "Do not ask again", 0, QApplication::UnicodeUTF8));
        lbReason->setText(QApplication::translate("RebuildDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-size:10pt; font-weight:600;\">The sources have been modified</span><span style=\" font-size:10pt;\"> </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\">Do you want to rebuild the project?</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RebuildDialog: public Ui_RebuildDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REBUILDDIALOG_H
