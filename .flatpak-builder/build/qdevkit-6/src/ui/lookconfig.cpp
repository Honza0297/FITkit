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

#include <QFontDatabase>
#include <QLineEdit>
#include <QPushButton>
#include <QCheckBox>
#include <QListWidget>
#include <QGroupBox>
#include <QScrollArea>
#include <QColorDialog>
#include <QLabel>
#include <QMenu>
#include <QAction>

#include "lookconfig.h"
#include "objectsettings.h"
#include "highlighter.h"
#include "connection.h"

class LookConfig::Private
{
   public:
      Private()
      : lwFontFamily(0), lwFontSize(0), sampleText(0), hl(0), contextBox(0),
        lwHighlight(0), hlContext(0), hlPattern(0), hlBold(0), hlItalic(0),
        hlUnderline(0), hlStrike(0), hlForeground(0), hlBackground(0)
      {}

      // Font
      QListWidget*  lwFontFamily;
      QListWidget*  lwFontSize;
      QLabel*       sampleText;

      // Highlighting
      Highlighter* hl;
      QComboBox* contextBox;
      QListWidget* lwHighlight;
      QLineEdit* hlContext;
      QLineEdit* hlPattern;
      QCheckBox* hlBold;
      QCheckBox* hlItalic;
      QCheckBox* hlUnderline;
      QCheckBox* hlStrike;
      QPushButton* hlForeground;
      QPushButton* hlBackground;
};

/*
  struct TestItem {
  QString contextId;
  void (*function)(void);
};
*/
class ContextItem
{
   public:
      QString label;
      QString contextId;
      void (*setDefaults)(void);

      ContextItem(QString label, QString contextId, void (*setDefaults)(void)) :
         label(label), contextId(contextId), setDefaults(setDefaults) {};
      ContextItem(): setDefaults(0) {};
};
Q_DECLARE_METATYPE(ContextItem);

///QList<ContextItem> list;

ContextList LookConfig::getContextList()
{
   ContextList list;
   list << ContextItem("Terminal","terminal",&setTerminalDefaults);
   list << ContextItem("Process - Subversion","job.subversion",&setSvnDefaults);
   list << ContextItem("Process - Build","job.make",&setFCMakeDefaults);
   return list;
}

LookConfig::LookConfig(Settings *parent)
   : ConfigComponent(parent), d ( new Private() )
{
   // Setup UI
   createFontPage();
   createHighlightPage();

   // Create context combo box
   d->contextBox = new QComboBox(this);
   foreach(const ContextItem& it, getContextList())
      d->contextBox->addItem(it.label, QVariant::fromValue(it));

   connect(d->contextBox, SIGNAL(currentIndexChanged(int)), this, SLOT(changeRules(int)));

   QHBoxLayout* hbox = new QHBoxLayout();
   QLabel* label = new QLabel("<b>Context</b>:",this);
   label->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
   hbox->addWidget(label);
   hbox->addWidget(d->contextBox);
   pageLayout->insertLayout(0,hbox);

   // Load fonts
   QFontDatabase fontdb;
   foreach (const QString& family, fontdb.families())
      d->lwFontFamily->addItem(family);

   // Connect
   connect(d->lwFontSize,   SIGNAL(currentItemChanged(QListWidgetItem*, QListWidgetItem*)),
           this,           SLOT(updateSample()));
   connect(d->lwFontFamily, SIGNAL(currentItemChanged(QListWidgetItem*, QListWidgetItem*)),
           this,           SLOT(updateSizeList()));

   // Connect highlight list
   connect(d->lwHighlight, SIGNAL(currentItemChanged(QListWidgetItem*, QListWidgetItem*)),
           this,           SLOT(selectRule(QListWidgetItem*, QListWidgetItem*)));

   connect(d->hlForeground,SIGNAL(clicked()),         this, SLOT(pickForeground()));
   connect(d->hlBackground,SIGNAL(clicked()),         this, SLOT(pickBackground()));

   connect(d->hlBold,      SIGNAL(stateChanged(int)), this, SLOT(updateRule()));
   connect(d->hlItalic,    SIGNAL(stateChanged(int)), this, SLOT(updateRule()));
   connect(d->hlUnderline, SIGNAL(stateChanged(int)), this, SLOT(updateRule()));
   connect(d->hlStrike,    SIGNAL(stateChanged(int)), this, SLOT(updateRule()));

   connect(d->hlContext,   SIGNAL(editingFinished()), this, SLOT(updateRule()));

   // Set current
   changeRules(0);
}

void LookConfig::save()
{
   // Save highlighting rules
   updateRule();

   // Save font
   QListWidgetItem *it;
   it = d->lwFontFamily->currentItem();
   if (it != 0)
      d->hl->fontFamily = it->text();

   it = d->lwFontSize->currentItem();
   if (it != 0)
      d->hl->fontSize = it->text().toInt();

   // Save
   d->hl->save();
}

LookConfig::~LookConfig()
{
   delete d->hl;
   delete d;
}

void LookConfig::createFontPage()
{
   // Font settings page
   QWidget* page = new QWidget(this);
   createPage(page, tr("Fo&nt"));

   // Create lists
   d->lwFontFamily = new QListWidget(page);
   d->lwFontSize   = new QListWidget(page);
   d->lwFontFamily->setObjectName("FontFamily");
   d->lwFontSize->setObjectName("FontSize");
   d->lwFontFamily->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
   d->lwFontSize->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::MinimumExpanding);
   d->sampleText = new QLabel(tr("As bright and shiny as a newly minted coin."), page);
   d->sampleText->setAlignment(Qt::AlignCenter);

   // Create lists layout
   QLabel* lbFontFamily = new QLabel(tr("Font family:"), page);
   QLabel* lbFontSize   = new QLabel(tr("Font size:"), page);

   QGridLayout* ltFont = new QGridLayout(page);
   ltFont->setVerticalSpacing(10);
   ltFont->addWidget(lbFontFamily,   0, 0);
   ltFont->addWidget(lbFontSize,     0, 1);
   ltFont->addWidget(d->lwFontFamily, 1, 0);
   ltFont->addWidget(d->lwFontSize,   1, 1);

   QGroupBox* gbFontSample = new QGroupBox(tr("Sample text"), page);
   QVBoxLayout* ltFontSample = new QVBoxLayout(gbFontSample);
   QScrollArea* sampleArea = new QScrollArea(page);
   ltFontSample->addWidget(sampleArea);
   sampleArea->setBackgroundRole(QPalette::Base);
   sampleArea->setAutoFillBackground(true);
   sampleArea->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
   sampleArea->setWidgetResizable(true);
   sampleArea->setWidget(d->sampleText);

   ltFont->addWidget(gbFontSample,   2, 0, 1, 2);
}

void LookConfig::createHighlightPage()
{
   // Highlighting
   QWidget* page = new QWidget(this);
   createPage(page, tr("&Highlighting"));

   QGroupBox* gbRules = new QGroupBox(page);
   d->lwHighlight = new QListWidget(gbRules);
   d->lwHighlight->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Minimum);

   // Control buttons
   d->hl = new Highlighter();
   QPushButton* btList    = new QPushButton(QIcon(":/icons/22x22/next.png"), tr("Rul&es"), gbRules);
   QMenu* mnList = new QMenu(tr("Rules"), btList);
   QAction* atAdd    = new QAction(QIcon(":/icons/22x22/list-add.png"), tr("&New"),       mnList);
   QAction* atRemove = new QAction(QIcon(":/icons/22x22/list-remove.png"), tr("&Remove"), mnList);
   QAction* atRevert = new QAction(QIcon(":/icons/22x22/undo.png"),  tr("&Defaults"),     mnList);

   mnList->addAction(atAdd);
   mnList->addAction(atRemove);
   mnList->addAction(atRevert);
   btList->setMenu(mnList);

   // Connect buttons
   connect(atAdd,    SIGNAL(triggered()), this, SLOT(createRule()));
   connect(atRemove, SIGNAL(triggered()), this, SLOT(removeRule()));
   connect(atRevert, SIGNAL(triggered()), this, SLOT(revertRules()));

   QHBoxLayout* ltButtons  = new QHBoxLayout();
   ltButtons->setAlignment(Qt::AlignRight);
   ltButtons->addWidget(btList);

   QVBoxLayout* ltRules = new QVBoxLayout(gbRules);
   ltRules->addWidget(d->lwHighlight);
   ltRules->addLayout(ltButtons);

   // Properties
   QGroupBox* gbProperties = new QGroupBox(tr("Rule properties"));
   QGridLayout* ltProperties = new QGridLayout(gbProperties);
   gbProperties->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);

   // Add properties
   QLabel* lbContext = new QLabel(tr("Context:"));
   QLabel* lbPattern = new QLabel(tr("Pattern:"));
   d->hlContext = new QLineEdit();
   d->hlPattern = new QLineEdit();
   ltProperties->addWidget(lbContext,   0, 0);
   ltProperties->addWidget(d->hlContext, 0, 1);
   ltProperties->addWidget(lbPattern,   1, 0);
   ltProperties->addWidget(d->hlPattern, 1, 1);

   QGroupBox* gbFormat = new QGroupBox(tr("Format"));
   ltProperties->addWidget(gbFormat,     2, 0, 1, 2);

   QVBoxLayout* ltFormat = new QVBoxLayout(gbFormat);
   d->hlBold      = new QCheckBox(tr("Bold"));
   d->hlItalic    = new QCheckBox(tr("Italic"));
   d->hlUnderline = new QCheckBox(tr("Underline"));
   d->hlStrike    = new QCheckBox(tr("Strikeout"));
   d->hlForeground= new QPushButton(QIcon(":/icons/22x22/color.png"), tr("Color"));
   d->hlBackground= new QPushButton(QIcon(":/icons/22x22/color.png"), tr("Background"));

   d->hlForeground->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
   d->hlBackground->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);

   QFont font;
   font.setBold(true);
   d->hlBold->setFont(font);
   font.setBold(false);
   font.setItalic(true);
   d->hlItalic->setFont(font);
   font.setItalic(false);
   font.setUnderline(true);
   d->hlUnderline->setFont(font);
   font.setUnderline(false);
   font.setStrikeOut(true);
   d->hlStrike->setFont(font);

   ltFormat->addWidget(d->hlBold);
   ltFormat->addWidget(d->hlItalic);
   ltFormat->addWidget(d->hlUnderline);
   ltFormat->addWidget(d->hlStrike);
   ltFormat->addWidget(d->hlForeground);
   ltFormat->addWidget(d->hlBackground);

   // Page layout
   QHBoxLayout* ltHighlight = new QHBoxLayout(page);
   ltHighlight->addWidget(gbRules);
   ltHighlight->addWidget(gbProperties);
}

void LookConfig::revertRules()
{
   int index = d->contextBox->currentIndex();
   if ((index < 0) || (!d->contextBox->itemData(index).canConvert<ContextItem>()))
      return;
   ContextItem it = d->contextBox->itemData(index).value<ContextItem>();
   if (it.contextId.isEmpty())
      return;

   setHighlighterDefaults(it.contextId);
   d->hl->setContext(it.contextId);
   d->hl->load();

   reloadRules();
}

void LookConfig::reloadRules()
{
   disconnect(d->lwHighlight, SIGNAL(currentItemChanged(QListWidgetItem*, QListWidgetItem*)),
              this,           SLOT(selectRule(QListWidgetItem*, QListWidgetItem*)));

   // Clear old list
   d->lwHighlight->clear();

   // Renew item list
   if(d->hl->size() > 0)
   {
      const HighlightRuleList& rules = d->hl->list();
      foreach(const HighlightRule& rule, rules)
      {
         QListWidgetItem* item = new QListWidgetItem(rule.context, d->lwHighlight);
         item->setForeground(rule.format.foreground());
         item->setBackground(rule.format.background());
         QFont font = rule.format.font();
         QListWidgetItem *it;
         it = d->lwFontFamily->currentItem();
         if (it != 0)
            font.setFamily(it->text());
         it = d->lwFontSize->currentItem();
         if (it != 0)
            font.setPointSize(it->text().toInt());
         item->setFont(font);

      }
   }

   // Reconnect list
   connect(d->lwHighlight, SIGNAL(currentItemChanged(QListWidgetItem*, QListWidgetItem*)),
           this,           SLOT(selectRule(QListWidgetItem*, QListWidgetItem*)));

   // Set default item
   if(d->lwHighlight->count() > 0)
      d->lwHighlight->setCurrentRow(0);
}

void LookConfig::changeRules(int index)
{
   if (!d->contextBox->itemData(index).canConvert<ContextItem>())
      return;
   ContextItem it = d->contextBox->itemData(index).value<ContextItem>();

   if (it.contextId.isEmpty())
      return;

   // Save old data
   if(!d->hl->context().isEmpty())
   {
      save();
   }

   // Reload new data
   d->hl->setContext(it.contextId);
   d->hl->load();

   QList<QListWidgetItem*> items;
   // Select font
   items = d->lwFontFamily->findItems(d->hl->fontFamily, Qt::MatchFixedString);
   if (items.size() > 0)
      d->lwFontFamily->setCurrentItem(items[0]);

   items = d->lwFontSize->findItems(QString("%1").arg(d->hl->fontSize), Qt::MatchFixedString);
   if (items.size() > 0)
      d->lwFontSize->setCurrentItem(items[0]);


   // Handle defaults
   if(d->hl->size() == 0)
   {
      setHighlighterDefaults(it.contextId);
      d->hl->load();
   }

   reloadRules();
}

void LookConfig::updateSizeList()
{
   // Clear old list
   QFontDatabase fontdb;
   QListWidgetItem* previousItem = d->lwFontSize->currentItem();
   QString previousSize("10");
   if(previousItem != 0)
      previousSize = previousItem->text();

   d->lwFontSize->clear();

   // Update size list
   QList<int> sizeList = fontdb.pointSizes(d->lwFontFamily->currentItem()->text());
   foreach(int size, sizeList)
   {
      QListWidgetItem* item = new QListWidgetItem(QString::number(size));
      item->setTextAlignment(Qt::AlignRight);
      d->lwFontSize->addItem(item);
   }

   // Set old value
   QList<QListWidgetItem *> matchList = d->lwFontSize->findItems(previousSize, Qt::MatchFixedString);
   if(matchList.size() > 0)
      d->lwFontSize->setCurrentItem(matchList[0]);
   else
      d->lwFontSize->setCurrentRow(0);

   updateSample();
}

void LookConfig::updateSample()
{
   QListWidgetItem *familyItem, *sizeItem;
   familyItem = d->lwFontFamily->currentItem();
   sizeItem   = d->lwFontSize->currentItem();

   QFont font;
   if (familyItem != 0)
      font.setFamily(familyItem->text());

   if(sizeItem != 0)
      font.setPointSize(sizeItem->text().toInt());

   d->sampleText->setFont(font);
   reloadRules();
}

void LookConfig::selectRule(QListWidgetItem* cur, QListWidgetItem* prev)
{
   // Check size
   if(d->lwHighlight->count() < 2)
      return;

   // Save old rule
   if(prev != 0)
   {
      // Do not continue if context empty
      if(d->hlContext->text().size() == 0)
      {
         d->hlContext->setFocus();
         d->lwHighlight->setCurrentItem(prev);
         return;
      }
      else
         updateRule(prev);
   }

   // Show selected rule properties
   HighlightRule* rule = d->hl->rule(d->lwHighlight->row(cur));
   if(rule == 0)
   {
      qDebug("DEBUG: selectRule(): no rule at this index %d:", d->lwHighlight->row(cur));
      return;
   }

   d->hlContext->setText(rule->context);
   d->hlPattern->setText(rule->pattern.pattern());

   QFont font = rule->format.font();
   d->hlBold->setChecked(font.bold());
   d->hlItalic->setChecked(font.italic());
   d->hlUnderline->setChecked(font.underline());
   d->hlStrike->setChecked(font.strikeOut());
}

void LookConfig::updateRule(QListWidgetItem* item)
{
   if(item == 0)
      if((item = d->lwHighlight->currentItem()) == 0)
         return;

   // Update item
   item->setText(d->hlContext->text());

   // Update format
   QFont font = item->font();
   font.setFamily(d->hl->fontFamily);
   font.setPointSize(d->hl->fontSize);
   font.setBold(d->hlBold->isChecked());
   font.setItalic(d->hlItalic->isChecked());
   font.setUnderline(d->hlUnderline->isChecked());
   font.setStrikeOut(d->hlStrike->isChecked());
   item->setFont(font);

   // Update rule
   HighlightRule* rule = d->hl->rule(d->lwHighlight->row(item));
   rule->context = d->hlContext->text();
   rule->pattern = QRegExp(d->hlPattern->text());
   rule->format.setFont(font);
}

void LookConfig::pickForeground()
{
   QListWidgetItem* item = d->lwHighlight->currentItem();
   if(item == 0)
      return;

   HighlightRule* rule = d->hl->rule(d->lwHighlight->row(item));
   QColor color = QColorDialog::getColor (rule->format.foreground().color(), this);

   if(color.isValid())
   {
      rule->format.setForeground(color);
      item->setForeground(rule->format.foreground());
   }
}

void LookConfig::pickBackground()
{
   QListWidgetItem* item = d->lwHighlight->currentItem();
   if(item == 0)
      return;

   HighlightRule* rule = d->hl->rule(d->lwHighlight->row(item));
   QColor color = QColorDialog::getColor (rule->format.background().color(), this);

   if(color.isValid())
   {
      rule->format.setBackground(color);
      item->setBackground(rule->format.background());
   }
}

void LookConfig::createRule()
{
   static int ruleid = 0;

   // Create rule
   QListWidgetItem* item = new QListWidgetItem(d->lwHighlight);
   item->setText(tr("Rule") + QString::number(++ruleid));

   // Fill initial values
   HighlightRule rule;
   rule.context = item->text();
   rule.pattern = QRegExp("\\bkeyword\\b");
   rule.format  = QTextCharFormat();

   // append rule
   d->hl->list().append(rule);
   d->lwHighlight->setCurrentItem(item);
}

void LookConfig::removeRule()
{
   QListWidgetItem* item = d->lwHighlight->currentItem();
   if(item == 0)
      return;

   // Remember row
   int row = d->lwHighlight->row(item);
   delete item;

   // Remove from highlighter
   d->hl->list().removeAt(row);
}

void LookConfig::updateLanguage(int row)
{
   if(row < 0)
      return;
}

void LookConfig::setHighlighterDefaults(const QString& context)
{
   foreach(const ContextItem& it, getContextList())
   {
      if ((context.isEmpty()) || (it.contextId == context))
         it.setDefaults();
   }
}

void LookConfig::setTerminalDefaults()
{
   // Define default formats
   QTextCharFormat fmtHeading, fmtKeyword, fmtMenu, fmtCommand, fmtDecoration;
   fmtHeading.setFontUnderline(true);
   fmtHeading.setForeground(Qt::darkBlue);
   fmtHeading.setFontWeight(QFont::Bold);
   fmtKeyword.setFontWeight(QFont::Bold);
   fmtMenu.setFontWeight(QFont::Bold);
   fmtMenu.setForeground(QColor(255, 128, 0));
   fmtCommand.setForeground(Qt::darkRed);
   fmtCommand.setFontWeight(QFont::Bold);
   fmtDecoration.setForeground(Qt::lightGray);

   // Set patterns
   Highlighter hl("terminal");
   hl.clear();
   hl.append("FITKit",    "\\bFITkit\\b",          fmtHeading);
   hl.append("Help",      "\\bhelp|Napoveda\\:?\\b",fmtKeyword);
   hl.append("Menu",      "^\\s*[A-Z]{2,}[^\\.]+(?=[\\.]{2,})", fmtMenu);
   hl.append("Revision",  "\\$Rev:\\s?[0-9]{3}\\s?\\$",  fmtDecoration);
   hl.append("HorizontalLine",     "[\\-]{6,}",             fmtDecoration);
   hl.append("DottedLine","[\\.]{2,}",             fmtDecoration);
   hl.append("Command",   "\\>.*\\b",              fmtCommand);
   hl.save();
}

void LookConfig::setFCMakeDefaults()
{
   // Define default formats
   QTextCharFormat fmtGreen, fmtBlue;
   fmtGreen.setFontWeight(QFont::Bold);
   fmtGreen.setForeground(Qt::darkGreen);
   fmtBlue.setForeground(Qt::darkBlue);

   // Set FCMake patterns
   Highlighter hl("job.make");
   hl.clear();
   hl.append("Decoration",    "^[*=].+[*=]$",              fmtGreen);
   hl.append("Message",       "^(INFO|WARNING|ERROR):.+$", fmtBlue);
   hl.save();
}

void LookConfig::setSvnDefaults()
{
   // Define default formats
   QTextCharFormat fmtGreen, fmtBlue, fmtRed, fmtBold;
   fmtBold.setFontWeight(QFont::Bold);
   fmtGreen = fmtBold;
   fmtGreen.setForeground(Qt::darkGreen);
   fmtBlue = fmtBold;
   fmtBlue.setForeground(Qt::darkBlue);
   fmtRed = fmtBold;
   fmtRed.setForeground(Qt::darkRed);


   // Set Subversion patterns
   Highlighter hl("job.subversion");
   hl.clear();
   hl.append("Added",        "^A\\s.*$",                 fmtGreen);
   hl.append("Updated",      "^U\\s.*$",                 fmtBlue);
   hl.append("Removed",      "^D\\s.*$",                 fmtRed);
   hl.append("AtRevision", "^At\\srevision\\s([0-9]+)", fmtBold);
   hl.save();
}

#include "lookconfig.moc"
