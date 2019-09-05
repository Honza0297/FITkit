/***************************************************************************
 *   Copyright (C) 2011 Brno University of Technology,                     *
 *   Faculty of Information Technology                                     *
 *   Author(s): Marek Vavrusa    <xvavru00 AT stud.fit.vutbr.cz>           *
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

#include <QListWidget>
#include <QGroupBox>
#include <QCheckBox>
#include <QPushButton>
#include <QScrollArea>
#include <QLabel>
#include <QList>
#include <QDir>
#include <QDialog>
#include <QTimer>
#include <QApplication>
#include <QStackedWidget>
#include <QDateTime>

#include <fcmake/keychain.h>
#include <fcmake/remote.h>
#include "remoteconfig.h"
#include "fileselector.h"
#include "objectsettings.h"
#include "qdevkit.h"

class RemoteConfig::Private
{
public:
   Private()
      : useDiscovery(0), licenseChoice(0), tunnelPorts(0),
        defaultTool(0), buildStack(0), serverKey(0),
        autoShare(0)
   {}
   
   QCheckBox* useDiscovery;
   
   QCheckBox* licenseChoice;
   QLineEdit* tunnelPorts;
   QComboBox* defaultTool;
   QStackedWidget* buildStack;
   KeyItem* serverKey;
   QCheckBox* autoShare;
};

RemoteConfig::RemoteConfig(Settings *parent)
   : ConfigComponent(parent), d(new Private)
{
   // Setup UI
   createWidgets();

    // Load settings
   QSettings set;
   set.beginGroup("Remote");	

   // Remotes settings
   d->useDiscovery->setChecked(set.value("UseDiscovery", false).toBool());
   d->autoShare->setChecked(set.value("AutoShare", false).toBool());

   // Build server settings
   keyRemoved("");
   if (set.contains("BServerKey")) {
      QString keyid = set.value("BServerKey").toString();
	  if (!keyid.isEmpty()) {
                  keyCreated(keyid);
	  }
   }

   // License tunneling
   d->licenseChoice->setChecked(set.value("LicenseTunnel", false).toBool());
   d->tunnelPorts->setText(tunnelPorts());

   // Preferences
   if (set.value("IsRBuildDefault").toBool()) {
       d->defaultTool->setCurrentIndex(1);
   }
   set.endGroup();
}

RemoteConfig::~RemoteConfig()
{
   delete d;
}

void RemoteConfig::save()
{
   QSettings set;
   set.beginGroup("Remote");
   QString keyid;

   // Save remotes
   set.setValue("UseDiscovery", (d->useDiscovery->isChecked()));
   set.setValue("AutoShare", (d->autoShare->isChecked()));

	// Save build server
   if (d->serverKey) {
	   keyid = d->serverKey->key().identity();
	   set.setValue("BServerKey", keyid);
	   set.setValue("BServerPort", BServerPort);
       set.setValue("LicenseTunnel", d->licenseChoice->isChecked());
	   setTunnelPorts(d->tunnelPorts->text());
       set.setValue("IsRBuildDefault", d->defaultTool->currentIndex() == 1);
   } else {
	   set.remove("BServerKey");
	   set.setValue("LicenseTunnel", false);
       set.setValue("IsRBuildDefault", false);
   }

   set.endGroup();
}

void RemoteConfig::createKey()
{
    RemoteDialog* dlg = new RemoteDialog(this);
	dlg->serverLine()->setText(RemoteConfig::BServerFullName());
	dlg->setModal(true);
    dlg->show();

	connect(dlg, SIGNAL(finished(int)), dlg, SLOT(deleteLater()));
	connect(dlg, SIGNAL(keyCreated(QString)), this, SLOT(keyCreated(QString)));
}

void RemoteConfig::keyCreated(QString keyid)
{
	/* Attempt to remove if exists. */
	keyRemoved(keyid);

	/* Create new widget. */
	d->serverKey = new KeyItem(FCMake::Key(keyid), this);
	d->buildStack->addWidget(d->serverKey);
	connect(d->serverKey, SIGNAL(removed(QString)), this, SLOT(keyRemoved(QString)));
	connect(d->serverKey, SIGNAL(updated(QString)), this, SLOT(keyCreated(QString)));

	d->buildStack->setCurrentIndex(1);
	d->licenseChoice->setEnabled(true);
	d->tunnelPorts->setEnabled(true);
	d->defaultTool->setEnabled(true);
}

void RemoteConfig::keyRemoved(QString keyid)
{
	/* Remove widget if exists. */
	if (d->serverKey) {
		d->buildStack->removeWidget(d->serverKey);
		d->serverKey->deleteLater();
		d->serverKey = 0;
	}

	d->buildStack->setCurrentIndex(0);
	d->licenseChoice->setEnabled(false);
	d->tunnelPorts->setEnabled(false);
	d->defaultTool->setEnabled(false);
}

void RemoteConfig::licenseChanged(int index)
{
	Q_UNUSED(index);
}

bool RemoteConfig::setupKey(QString identity, QString password, bool storeKey)
{
    // Connect to remote host
    FCMake::Key key(identity);
    FCMake::Remote remote(key.host(), key.port());
    if (!remote.connect(key.login(), password)) {
        return false;
    }

    // Initialize remote key
	if (storeKey) {
		if (!remote.initKeys(&key)) {
			return false;
		}
	} else {
		key.store("");
	}

    return true;
}

QString RemoteConfig::defaultPorts()
{
    return QString("1717,1050,2100,38536");
}

QString RemoteConfig::tunnelPorts()
{
    QSettings set;
    return set.value("Remote/TunnelPorts", defaultPorts()).toString();
}

void RemoteConfig::setTunnelPorts(QString ports)
{
    QSettings set;
    set.setValue("Remote/TunnelPorts", ports);
}

void RemoteConfig::createWidgets()
{
    // Create groups
    QGroupBox* gRemotes   = new QGroupBox(tr("Remote devices"), this);
    QGroupBox* gBuild     = new QGroupBox(tr("Build server"), this);

    // Remotes config
    QHBoxLayout* ltRemotes(new QHBoxLayout(gRemotes));

    d->useDiscovery = new QCheckBox;
    d->useDiscovery->setChecked(true);
    d->useDiscovery->setText(tr("Discover devices in local network"));
    ltRemotes->addWidget(d->useDiscovery);

    d->autoShare = new QCheckBox;
    d->autoShare->setChecked(true);
    d->autoShare->setText(tr("Share devices automatically"));
    ltRemotes->addWidget(d->autoShare);
	 
   // Build server config
   QVBoxLayout* ltBuild(new QVBoxLayout(gBuild));

   d->buildStack = new QStackedWidget;
   QWidget *addWidget = new QWidget;
   QVBoxLayout* ltAdd = new QVBoxLayout(addWidget);
   ltAdd->addWidget(new QLabel(tr("No connection configured.")), 0, Qt::AlignCenter);
   QPushButton* btAdd = new QPushButton(QIcon(":/icons/22x22/network-connect.png"),
                                        tr("Connect to build server"));
   btAdd->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
   ltAdd->addWidget(btAdd, 0, Qt::AlignCenter);
   connect(btAdd, SIGNAL(clicked()), this, SLOT(createKey()));

   d->buildStack->addWidget(addWidget); 
   ltBuild->addWidget(d->buildStack);
   ltBuild->addStretch(1);

   // Options
   QHBoxLayout* opts(new QHBoxLayout);
   opts->addWidget(new QLabel(tr("Default build:")));
   d->defaultTool = new QComboBox;
   d->defaultTool->addItem(tr("Local tools"));
   d->defaultTool->addItem(tr("Build server"));
   opts->addWidget(d->defaultTool);

   d->licenseChoice = new QCheckBox;
   d->licenseChoice->setChecked(true);
   connect(d->licenseChoice, SIGNAL(stateChanged(int)), this, SLOT(licenseChanged(int)));

   d->tunnelPorts = new QLineEdit;
   d->tunnelPorts->setToolTip(tr("Default ports: ") + tunnelPorts());

   opts->addStretch(1);
   opts->addWidget(new QLabel(tr("License tunelling:")));
   opts->addWidget(d->licenseChoice);
   QHBoxLayout* ltPorts = new QHBoxLayout;
   ltPorts->addWidget(new QLabel(tr("Ports:")));
   ltPorts->addWidget(d->tunnelPorts);

   ltBuild->addLayout(opts);
   ltBuild->addLayout(ltPorts);

   // Set layout
   QVBoxLayout* lt = new QVBoxLayout;
   lt->addWidget(gRemotes);
   lt->addWidget(gBuild);
   setLayout(lt);
}

RemoteDialog::RemoteDialog(RemoteConfig *parent)
: QDialog(parent), mConfig(parent)
{
	setup();
}

void RemoteDialog::auth()
{
	// Evaluate hostname
	mButton->setEnabled(false);
	QApplication::processEvents();

	QString ident;
    if (mServer->text().isEmpty()) {
		mTextInfo->setText(tr("Error: Server hostname is empty."));
		QApplication::processEvents();
	} else {
		// Create identity
        if (!mUser->text().isEmpty()) {
			ident.append(mUser->text());
            ident.append("@");
        }

        ident.append(mServer->text());
        ident.append(":");
        ident.append(QString::number(mPort->value()));

        // Create key
        mTextInfo->setText(tr("Authenticating with remote server..."));
		QApplication::processEvents();
		if (mConfig->setupKey(ident, mPassword->text(), mStoreKey->isChecked())) {
			mTextInfo->setText(tr("Key created."));
                        emit(keyCreated(ident));
			QApplication::processEvents();
			accept();
			return;
        } else {
			mTextInfo->setText(tr("Error: Authenticating with remote host failed."));
			QApplication::processEvents();
        }
	}
	mButton->setEnabled(true);
	QApplication::processEvents();
}

void RemoteDialog::setup()
{
    setWindowTitle(tr("Authenticate with build server"));
    setMinimumWidth(400);

    // Decorations
    QLabel* lbIcon = new QLabel(this);
    mHead = new QLabel(this);
	setHeading(tr("Add new connection"));
    lbIcon->setPixmap(QPixmap(":/icons/48x48/device-network.png"));

    // User inputs
    mTextInfo = new QLabel(this);
    QLabel* lbServer = new QLabel(tr("<b>Server:</b>"), this);
    QLabel* srvInfo = new QLabel(tr("Build server %1 is reachable only within VUT network.\nIn case of connection troubles, please use merlin.fit.vutbr.cz.").arg(RemoteConfig::BServerName()));

    QLabel* lbUser = new QLabel(tr("<b>Username:</b>"), this);
    QLabel* lbPass = new QLabel(tr("<b>Password:</b>"), this);
    QLabel* lbPort = new QLabel(tr("<b>Port:</b>"), this);
    QLabel* lbStore = new QLabel(tr("<b>Store authentication key:</b>"));
    mServer = new QLineEdit("localhost", this);
    mUser = new QLineEdit("", this);
    mPassword = new QLineEdit("", this);
    mPassword->setEchoMode(QLineEdit::Password);
    mPort = new QSpinBox(this);
    mPort->setRange(1, 65536);
    mPort->setValue(FCMake::Remote::DefaultPort);
    mStoreKey = new QCheckBox(this);
    mStoreKey->setChecked(true);
    connect(mStoreKey, SIGNAL(toggled(bool)), this, SLOT(showWarning(bool)));
    QLabel* pwdInfo = new QLabel(tr("Password will not be stored."));

    // Controls
    mButton = new QPushButton(QIcon(":/icons/22x22/bt-ok.png"),
                              tr("&Accept"), this);
    QPushButton* btCancel = new QPushButton(QIcon(":/icons/22x22/bt-cancel.png"),
                                            tr("&Cancel"), this);
    mButton->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
    btCancel->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
    connect(mButton,     SIGNAL(clicked()), this, SLOT(auth()));
    connect(btCancel, SIGNAL(clicked()), this, SLOT(reject()));
    
    // Warning
    mWarning = new QWidget;
    QHBoxLayout* ltWarning = new QHBoxLayout(mWarning);
    QLabel* warnIcon = new QLabel;
    warnIcon->setPixmap(QPixmap(":/icons/48x48/vcs_status.png"));
    ltWarning->addWidget(warnIcon);
    ltWarning->addWidget(new QLabel(tr("Authentication key will be stored in "
                                       "your configuration.<br/>"
                                       "Do not store keys if your computer "
                                       "may  be compromised.")));
    QVBoxLayout* ltWarnStretch = new QVBoxLayout;
    ltWarnStretch->addWidget(mWarning);
    ltWarnStretch->addStretch(1);
    

    // Layout
    QHBoxLayout* ltButtons = new QHBoxLayout();
    ltButtons->setAlignment(Qt::AlignCenter);
    ltButtons->addWidget(mButton);
    ltButtons->addWidget(btCancel);

    QGridLayout* lt = new QGridLayout(this);
    lt->addWidget(lbIcon, 0, 0);
    lt->addWidget(mHead, 0, 1);
    lt->addWidget(lbServer, 2, 0);
    lt->addWidget(mServer, 2, 1);
    lt->addWidget(srvInfo, 3, 1, 1, 2);
    lt->addWidget(lbUser, 4, 0);
    lt->addWidget(mUser, 4, 1);
    lt->addWidget(lbPass, 5, 0);
    lt->addWidget(mPassword, 5, 1);
    lt->addWidget(pwdInfo, 6, 1, 1, 2);
    lt->addWidget(new QLabel(tr("Optional parameters:")), 7, 0, 1, 2);
    lt->addWidget(lbPort, 8, 0);
    lt->addWidget(mPort, 8, 1);
    lt->addWidget(lbStore, 9, 0);
    lt->addWidget(mStoreKey, 9, 1, 1, 1, Qt::AlignLeft);
    lt->addWidget(mTextInfo, 10, 0, 1, 2, Qt::AlignCenter);
    lt->addLayout(ltWarnStretch, 11, 0, 1, 2);
    lt->addLayout(ltButtons, 12, 0, 1, 2);
}

void RemoteDialog::showWarning(bool val)
{
    mWarning->setVisible(val);
}

KeyItem::KeyItem(FCMake::Key key, RemoteConfig* parent)
   : QWidget(parent), mKey(key), mRemoveBtn(0), mConfigBtn(0)
{
   // Create widgets
   createWidgets();

   // Update geometry
   setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);

   // Connect
   connect(this, SIGNAL(removed(QString)), this, SLOT(deleteLater()));
}

bool KeyItem::isInteractive()
{
    return mRemoveBtn->isVisible();
}

void KeyItem::setInteractive(bool val)
{
    mRemoveBtn->setVisible(val);
	mConfigBtn->setVisible(val);
}

FCMake::Key& KeyItem::key()
{
    return mKey;
}

void KeyItem::createWidgets()
{

    // Create fields
    QLabel* lbText   = new QLabel(this);
    QString text = tr("<b>%1 @ %2, port %3</b><br>")
                   .arg(mKey.login())
                   .arg(mKey.host())
                   .arg(mKey.port());


    if (mKey.key().isEmpty()) {
        text.append(tr("<small>"
                       "<span>no public key stored</span><br>"
                       "</small>"));
    } else {

        // Hash public-key with MD5 to get fingerprint
        QByteArray raw_hash(mKey.pubkeyHash());

        // Create human-readable format
        QString hash;
        for (int i = 0; i < raw_hash.size() - 1; i += 2) {
            hash.append(raw_hash.at(i));
            hash.append(raw_hash.at(i + 1));
            hash.append(" ");
        }

        text.append(tr("<small>"
                       "<span>fingerprint: %4</span><br>"
                       "</small>")
                    .arg(hash));
    }


    lbText->setText(text);
    lbText->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);

    mRemoveBtn = new QPushButton(
                QIcon(":/icons/22x22/bt-close.png"),
                tr("Remove"), this);
	mConfigBtn = new QPushButton(
		        QIcon(":/icons/32x32/settings.png"),
				tr("Edit"), this);

    //mRemoveBtn->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
	mRemoveBtn->setIconSize(QSize(22,22));
    mRemoveBtn->setMaximumWidth(100);
	mConfigBtn->setIconSize(QSize(22,22));
	mConfigBtn->setMaximumWidth(100);
    connect(mRemoveBtn, SIGNAL(clicked()), this, SLOT(remove()));
	connect(mConfigBtn, SIGNAL(clicked()), this, SLOT(configure()));

    // Set layout
    QHBoxLayout* ltRow = new QHBoxLayout();
    ltRow->addWidget(lbText);

    QVBoxLayout* ltButtons = new QVBoxLayout();
    ltButtons->addWidget(mRemoveBtn);
	ltButtons->addWidget(mConfigBtn);
    ltRow->addLayout(ltButtons);

    // Create rule
    //QFrame* hr = new QFrame(this);
    //hr->setFrameStyle(QFrame::HLine);

    // Set main layout
    QVBoxLayout* ltMain = new QVBoxLayout(this);
    ltMain->addLayout(ltRow);
    //ltMain->addWidget(hr);
}

void KeyItem::remove()
{
	emit (removed(mKey.identity()));
	FCMake::KeyChain keys;
    keys.remove(mKey);
}

void KeyItem::configure()
{
	RemoteDialog* dlg = new RemoteDialog(qobject_cast<RemoteConfig*>(parent()));
	dlg->serverLine()->setText(key().host());
	dlg->userLine()->setText(key().login());
	dlg->passwordLine()->setText(key().password());
	dlg->portLine()->setValue(key().port());
        dlg->saveCheck()->setChecked(!key().key().isEmpty());
	dlg->setModal(true);
    dlg->show();
	connect(dlg, SIGNAL(finished(int)), dlg, SLOT(deleteLater()));
        connect(dlg, SIGNAL(keyCreated(QString)), this, SLOT(keyUpdate(QString)));
}

void KeyItem::keyUpdate(QString keyid)
{
	emit (updated(keyid));
}

#include "remoteconfig.moc"
