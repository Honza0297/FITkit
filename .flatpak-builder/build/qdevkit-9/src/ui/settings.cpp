/***************************************************************************
 *   Copyright (C) 2008 Brno University of Technology,                     *
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

#include <QWidget>
#include <QListWidget>
#include <QStackedWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include "settings.h"
#include "qdevkit.h"
#include "generalconfig.h"
#include "lookconfig.h"
#include "deviceconfig.h"
#include "pluginconfig.h"
#include "fktreeconfig.h"
#include "remoteconfig.h"

class SettingsPrivate
{
   public:
      SettingsPrivate()
      : menu(0), pages(0), general(0), look(0), device(0), plugins(0), apps(0),
        remote(0)
      {}

      QListWidget*    menu;
      QStackedWidget* pages;

      /* Config pages */
      GeneralConfig*  general;
      LookConfig*     look;
      DeviceConfig*   device;
      PluginConfig*   plugins;
      FkTreeConfig*   apps;
      RemoteConfig*   remote;
};

Settings::Settings(QDevKit *app, QWidget* parent)
      : QWidget(parent), Component(app), d ( new SettingsPrivate() )
{
   // Create menu
   d->menu = new QListWidget(this);
   d->menu->setViewMode(QListView::IconMode);
   d->menu->setIconSize(QSize(48, 48));
   d->menu->setMovement(QListView::Static);
   d->menu->setFixedWidth(120);
   d->menu->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::MinimumExpanding);

   // Populate icons
   createIcons();

   // Create first stacked widget
   d->general = new GeneralConfig(this);
   d->pages = new QStackedWidget(this);
   d->pages->addWidget(d->general);
   d->menu->setCurrentRow(0);

   // Create controls
   QPushButton* acceptButton = new QPushButton(QIcon(":/icons/22x22/bt-ok.png"), tr("Accept"));
   QPushButton* closeButton  = new QPushButton(QIcon(":/icons/22x22/bt-cancel.png"), tr("Close"));

   // Set layouts
   QHBoxLayout* ltWidgets = new QHBoxLayout();
   ltWidgets->addWidget(d->menu);
   ltWidgets->addWidget(d->pages);

   QHBoxLayout* ltButtons = new QHBoxLayout();
   ltButtons->addStretch(1);
   ltButtons->addWidget(acceptButton);
   ltButtons->addWidget(closeButton);

   QVBoxLayout* ltMain = new QVBoxLayout(this);
   ltMain->addLayout(ltWidgets);
   ltMain->addLayout(ltButtons);
   closeButton->setFocus();

   // Connect signals & slots
   connect(acceptButton, SIGNAL(clicked()), this, SLOT(accept()));
   connect(closeButton,  SIGNAL(clicked()), this, SLOT(reject()));

   setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
   setMinimumWidth(700);
   setMinimumHeight(550);
}

Settings::~Settings()
{
   delete d;
}

void Settings::setCurrentPage(QString name)
{
  if (name == "general")
     d->menu->setCurrentRow(0);
  else if (name == "fonts")
     d->menu->setCurrentRow(1);
  else if (name == "device")
     d->menu->setCurrentRow(2);
  else if (name == "remote")
     d->menu->setCurrentRow(3);
  else if (name == "plugins")
     d->menu->setCurrentRow(4);
  else if (name == "apps")
     d->menu->setCurrentRow(5);
}

void Settings::accept()
{
   // Update configuration
   emit(accepted());
   
   // Trigger dependent changes
   app().reloadSettings();
}

void Settings::reject()
{
   emit(rejected());
}

GeneralConfig& Settings::general() const
{ return *d->general; }

LookConfig& Settings::look() const
{ return *d->look; }

DeviceConfig& Settings::device() const
{ return *d->device; }

PluginConfig& Settings::plugins() const
{ return *d->plugins; }

FkTreeConfig& Settings::apps() const
{ return *d->apps; }

RemoteConfig& Settings::remote() const
{ return *d->remote; }

void Settings::appendIcon(QString text, QIcon icon)
{
   QListWidgetItem* item = new QListWidgetItem(d->menu);
   item->setIcon(icon);
   item->setText(text);

   QFont font = item->font();
   font.setBold(true);
   item->setFont(font);
   item->setTextAlignment(Qt::AlignHCenter);
   item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
   item->setSizeHint(QSize(d->menu->maximumWidth() - 6, 80));
}

void Settings::createIcons()
{
   // Create icons
   appendIcon(tr("General"),        QIcon(":/icons/48x48/settings.png"));
   appendIcon(tr("Fonts & Colors"), QIcon(":/icons/48x48/settings-look.png"));
   appendIcon(tr("Device"),         QIcon(":/icons/48x48/fitkit.png"));
   appendIcon(tr("Network"),        QIcon(":/icons/48x48/device-network.png"));
   appendIcon(tr("Plugins"),        QIcon(":/icons/48x48/plugin-scripted.png"));
   appendIcon(tr("Applications"),   QIcon(":/icons/48x48/applications.png"));
      
   // Bind signals
   connect(d->menu, SIGNAL(currentItemChanged(QListWidgetItem *, QListWidgetItem *)),
             this, SLOT(changePage(QListWidgetItem *, QListWidgetItem*)));
}

void Settings::changePage(QListWidgetItem *current, QListWidgetItem *previous)
{
  if(!current)
     current = previous;

  int pageId = d->menu->row(current);
  if(pageId != 0 && d->pages->count() == 1)
  {
     d->pages->addWidget(d->look    = new LookConfig(this));
     d->pages->addWidget(d->device  = new DeviceConfig(this));
     d->pages->addWidget(d->remote  = new RemoteConfig(this));
     d->pages->addWidget(d->plugins = new PluginConfig(this));
     d->pages->addWidget(d->apps    = new FkTreeConfig(this));
  }
  
  d->pages->setCurrentIndex(pageId);
}


void Settings::updateSVN()
{
  setCurrentPage("apps");
  d->apps->checkout();
}

#include "settings.moc"
