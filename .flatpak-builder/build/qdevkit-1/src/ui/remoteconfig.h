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

#ifndef REMOTE_CONFIG_H
#define REMOTE_CONFIG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QCheckBox>
#include "configcomponent.h"
#include "qdevkitui_export.h"
#include <fcmake/key.h>

class QPushButton;

class QDEVKITUI_EXPORT RemoteConfig : public ConfigComponent
{
   Q_OBJECT

   public:

      enum Defaults { BServerPort = 20022 };
      static char const* BServerName() { return "fitkit-build"; }
      static char const* BServerFullName() { return "fitkit-build.fit.vutbr.cz"; }

      RemoteConfig(Settings *parent);
      ~RemoteConfig();

      bool setupKey(QString identity, QString password, bool storeKey = true);

      static QString defaultPorts();
      static QString tunnelPorts();
      static void setTunnelPorts(QString ports);

   protected:
      void createWidgets();

   private slots:
      void save();
      void createKey();
          void keyCreated(QString keyid);
	  void keyRemoved(QString keyid);
	  void licenseChanged(int index);

   private:
      class Private;
      Private *d;
};

class QDEVKITUI_EXPORT RemoteDialog : public QDialog
{
   Q_OBJECT

   public:
      RemoteDialog(RemoteConfig *parent);

	  void setHeading(QString text) {
		  mHead->setText("<h2>" + text + "</h2>");
	  }

	  QLineEdit* serverLine() { return mServer; }
	  QLineEdit* userLine() { return mUser; }
	  QLineEdit* passwordLine() { return mPassword; }
	  QSpinBox*  portLine() { return mPort; }
	  QLabel* infoLine() { return mTextInfo; }
          QCheckBox* saveCheck() { return mStoreKey; }

   public slots:
      void auth();

   signals:
          void keyCreated(QString ident);
          
   private slots:
      void showWarning(bool val);

   private:
	  void setup();
	  QLabel* mHead;
	  RemoteConfig* mConfig;
	  QLabel* mTextInfo;
	  QLineEdit* mServer;
	  QLineEdit* mUser;
	  QLineEdit* mPassword;
	  QSpinBox*  mPort;
	  QCheckBox* mStoreKey;
	  QPushButton* mButton;
	  QWidget* mWarning;
};

class QDEVKITUI_EXPORT KeyItem : public QWidget
{
   Q_OBJECT

   public:
      KeyItem(FCMake::Key key, RemoteConfig* parent = 0);

      bool isInteractive();
      void setInteractive(bool val);
      FCMake::Key& key();


   protected slots:
      void remove();
      void configure();
	  void keyUpdate(QString keyid);

   signals:
	  void removed(QString ident);
	  void updated(QString ident);

   private:
      void createWidgets();
      FCMake::Key mKey;
      QPushButton* mRemoveBtn;
	  QPushButton* mConfigBtn;
};

#endif
