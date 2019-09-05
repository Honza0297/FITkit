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

#include <QScrollArea>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

#include "pluginconfig.h"
#include "pluginloader.h"
#include "pluginmgr.h"

class PluginConfig::Private
{
   public:
      Private()
         : area(0), layout(0), timerId(-1)
      {}

      QScrollArea* area;
      QVBoxLayout* layout;
      QList<PluginWidget*> widgets;
      int timerId;
};

class PluginWidget::Private
{
   public:
      Private()
         : plugin(0), btSettings(0), btLoad(0)
      {}

      PluginLoader*  plugin;
      QPushButton*   btSettings;
      QPushButton*   btLoad;
};

PluginConfig::PluginConfig(Settings *parent)
   : ConfigComponent(parent), d ( new Private() )
{
   // Create widgets
   createWidgets();

   // Trigger update
   triggerUpdate();
}

PluginConfig::~PluginConfig()
{
   clear();
   delete d;
}

void PluginConfig::triggerUpdate()
{
   if(d->timerId != -1)
      killTimer(d->timerId);

   d->timerId = startTimer(100);
}

void PluginConfig::update()
{
   clear();
   populate();
}

void PluginConfig::clear()
{
   foreach(PluginWidget* widget, d->widgets)
      delete widget;

   d->widgets.clear();
}

void PluginConfig::populate()
{
   PluginMgr& plugins = settings->plugins();
   foreach(PluginLoader* item, plugins.pluginList())
   {
      PluginWidget* widget = new PluginWidget(item, d->area);
      d->layout->addWidget(widget);
      d->widgets.append(widget);
   }
}

void PluginConfig::timerEvent(QTimerEvent* event)
{
   Q_UNUSED(event);
   qDebug("DEBUG: PluginConfig: update triggered ...");
   update();
   killTimer(d->timerId);
   d->timerId = -1;
}

void PluginConfig::save()
{
   QSettings set;
   set.beginGroup("Plugins");

   PluginMgr& plugins = settings->plugins();
   foreach(PluginLoader* item, plugins.pluginList())
      set.setValue(item->data()->name() + "/Enabled", item->isLoaded());

   set.endGroup();
}

void PluginConfig::createWidgets()
{
   // Prepare area
   d->area   = new QScrollArea(this);
   d->area->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
   d->area->setBackgroundRole(QPalette::Base);
   d->area->setAutoFillBackground(true);

   QWidget* content = new QWidget(this);
   content->setMinimumWidth(480);
   d->area->setWidget(content);
   d->area->setWidgetResizable(true);

   d->layout = new QVBoxLayout(content);
   d->layout->setAlignment(Qt::AlignTop|Qt::AlignLeft);

   // Set layout
   QVBoxLayout* ltMain = new QVBoxLayout(this);
   ltMain->addWidget(d->area);
}

PluginWidget::PluginWidget(PluginLoader* plugin, QWidget* parent)
   : QWidget(parent), d ( new Private() )
{
   // Create widgets
   d->plugin = plugin;
   createWidgets();

   // Connect
   setLoaded(plugin->isLoaded(), false);
   connect(d->btLoad, SIGNAL(clicked()),
            this,     SLOT(switchLoaded()));

   connect(d->btSettings, SIGNAL(clicked()),
            this,     SLOT(configure()));

   // Update geometry
   setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
}

PluginWidget::~PluginWidget()
{
   delete d;
}

void PluginWidget::createWidgets()
{
   // Reference data
   PluginData* data = d->plugin->data();

   // Create fields
   QLabel* lbIcon   = new QLabel(this);
   if(!data->icon().isEmpty())
   {
      if(data->icon().startsWith(':') || data->icon().startsWith('/'))
         lbIcon->setPixmap(QPixmap(data->icon()));
      else
         lbIcon->setPixmap(QPixmap(QDir(d->plugin->path()).absoluteFilePath(data->icon())));
   }
   else
   {
      if(data->type() == Plugin::Scripted)
         lbIcon->setPixmap(QPixmap(":/icons/48x48/plugin-scripted.png"));
      else
         lbIcon->setPixmap(QPixmap(":/icons/48x48/plugin.png"));
   }

   lbIcon->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
   lbIcon->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Maximum);
   lbIcon->setMinimumWidth(60);

   QLabel* lbText   = new QLabel(this);
   QString text = tr("<b>%1</b><br>"
                        "%2<br>"
                        "<small>"
                           "<span>%3, <a href='mailto:%4'>%4</a></span><br>"
                           "Version: <b>%5</b> License: <b>%6</b><br>"
                           "<i>(%7)</i>"
                        "</small>");

   text = text.arg(data->name())
              .arg(data->comment())
              .arg(data->author()).arg(data->email())
              .arg(data->version())
              .arg(data->license())
              .arg(data->type() == Plugin::Binary ? tr("binary plugin") : tr("python script"));

   lbText->setText(text);
   lbText->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);

   d->btLoad     = new QPushButton(tr("Unknown"), this);
   d->btSettings = new QPushButton(QIcon(":/icons/32x32/settings.png"), tr("Configure"), this);
   d->btLoad->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
   d->btSettings->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
   d->btLoad->setMaximumWidth(100);
   d->btSettings->setMaximumWidth(100);
   d->btSettings->setEnabled(data->configurable());


   // Set layout
   QHBoxLayout* ltRow = new QHBoxLayout();
   ltRow->addWidget(lbIcon);
   ltRow->addWidget(lbText);

   QVBoxLayout* ltButtons = new QVBoxLayout();
   ltButtons->addWidget(d->btLoad);
   ltButtons->addWidget(d->btSettings);
   ltRow->addLayout(ltButtons);

   // Create rule
   QFrame* hr = new QFrame(this);
   hr->setFrameStyle(QFrame::HLine);

   // Set main layout
   QVBoxLayout* ltMain = new QVBoxLayout(this);
   ltMain->addLayout(ltRow);
   ltMain->addWidget(hr);
}

void PluginWidget::setLoaded(bool loaded, bool update_plugin)
{
   if(loaded)
   {
      if(update_plugin)
         d->plugin->load();

      d->btLoad->setText(tr("Unload"));
      d->btLoad->setIcon(QIcon(":/icons/22x22/bt-cancel.png"));
   }
   else
   {
      if(update_plugin)
         d->plugin->unload();

      d->btLoad->setText(tr("Load"));
      d->btLoad->setIcon(QIcon(":/icons/22x22/bt-apply.png"));
   }
}

void PluginWidget::switchLoaded()
{
   setLoaded(!d->plugin->isLoaded());
}

void PluginWidget::configure()
{
   if (d->plugin->data()->configurable())
      d->plugin->configure();
}

#include "pluginconfig.moc"
