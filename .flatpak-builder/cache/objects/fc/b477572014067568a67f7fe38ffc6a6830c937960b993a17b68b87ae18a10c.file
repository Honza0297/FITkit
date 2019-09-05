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

#include <QSyntaxHighlighter>
#include <QTextCharFormat>
#include <QStringList>
#include <QSettings>
#include <QList>
#include <QMap>
#include <QApplication>

#include "highlighter.h"

class Highlighter::Private
{
   public:
      Private()
      {}
      
      HighlightRuleList rules;
      QString context;
};

Highlighter::Highlighter(const QString& context, QTextDocument *parent)
   : QSyntaxHighlighter(parent), d ( new Private() )
{
   fontSize = QApplication::font().pointSize();
   fontFamily = QApplication::font().family();
   #ifdef __WIN32  
   fontFamily = "Courier";
   #endif

   // Load rules
   if(!context.isEmpty())
   {
      d->context = context;
      load();
   }
}

Highlighter::~Highlighter()
{
   delete d;
}

void Highlighter::setContext(const QString& context)
{
   d->context = context;
}

const QString& Highlighter::context()
{
   return d->context;
}

HighlightRuleList& Highlighter::list() const
{
   return d->rules;
}
      
HighlightRule* Highlighter::rule(int index)
{
   return &d->rules[index];
}

void Highlighter::append(const QString& context, const QString& pattern, const QTextCharFormat& fmt)
{
   append(HighlightRule(context, pattern, fmt));
}

void Highlighter::append(HighlightRule rule)
{
   d->rules.append(rule);
}

void Highlighter::clear()
{
   d->rules.clear();
}

int Highlighter::size()
{
   return d->rules.size();
}

void Highlighter::load()
{
   QSettings set;
   QStringList list;

   set.beginGroup("Highlighter");
   set.beginGroup(d->context);

   if (set.contains("FontFamily"))
      fontFamily = set.value("FontFamily").toString();

   if (set.contains("FontSize"))
      fontSize = set.value("FontSize").toInt();
      
   list = set.childGroups();
      
   d->rules.clear();
   HighlightRule rule;
   foreach(const QString& context, list)
   {
      set.beginGroup(context);
      rule.context = context;
      rule.pattern = QRegExp(set.value("pattern").toString());
      rule.format  = QTextCharFormat();
      
      QFont font;
      font.setPointSize(fontSize);
      font.setFamily(fontFamily);
      font.setBold(set.value("weight").toBool());
      font.setItalic(set.value("italic").toBool());
      font.setUnderline(set.value("underline").toBool());
      font.setStrikeOut(set.value("strike").toBool());
      
      rule.format.setFont(font);
      
      QColor color;
      if(set.contains("color"))
      {
         color = set.value("color").value<QColor>();
         if(color.isValid())
            rule.format.setForeground(color);
      }
      
      if(set.contains("background"))
      {
         color = set.value("background").value<QColor>();
         if(color.isValid())
            rule.format.setBackground(color);
      }
      
      d->rules << rule;
      
      set.endGroup();
   }

   set.endGroup();
   set.endGroup();

   qDebug("DEBUG: Highlighter: loaded %d rules for \'%s\'", d->rules.size(), d->context.toStdString().c_str());
}

void Highlighter::save()
{
   // Save settings
   QSettings set;
   set.beginGroup("Highlighter");
   set.beginGroup(d->context);
   set.setValue("FontFamily", fontFamily);
   set.setValue("FontSize", fontSize);

//   set.remove("");
   foreach(const HighlightRule& rule, d->rules)
   {
      set.beginGroup(rule.context);
      
      QFont font = rule.format.font();
      set.setValue("pattern", rule.pattern.pattern());
      set.setValue("weight", font.bold());
      set.setValue("italic", font.italic());
      set.setValue("underline", font.underline());
      set.setValue("strike", font.strikeOut());
      
      QColor color = rule.format.foreground().color();
      if(rule.format.hasProperty(QTextFormat::ForegroundBrush))
         set.setValue("color", color);
      
      color = rule.format.background().color();
      if(rule.format.hasProperty(QTextFormat::BackgroundBrush))
         set.setValue("background", color);
      
      set.endGroup();
   }

   set.endGroup();
   set.endGroup();

   qDebug("DEBUG: Highlighter: saved %d rules for \'%s\'", d->rules.size(), d->context.toStdString().c_str());
}

void Highlighter::highlightBlock(const QString &text)
{
   foreach(const HighlightRule& rule, d->rules)
   {
      QRegExp expression(rule.pattern);
      int index = text.indexOf(expression);
         
      while (index >= 0)
      {
         int length = expression.matchedLength();
         setFormat(index, length, rule.format);
         index = text.indexOf(expression, index + length);
      }
   }
     
   setCurrentBlockState(0);
}
 
#include "highlighter.moc"
