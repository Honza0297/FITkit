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

#ifndef HIGHLIGHTER_H
#define HIGHLIGHTER_H

#include <QSyntaxHighlighter>
#include <QTextCharFormat>
#include <QList>
#include "qdevkitui_export.h"

class QTextDocument;

/* Exposed types */
class QDEVKITUI_EXPORT HighlightRule
{
   public:
      HighlightRule()
      {}
      HighlightRule(QString ct, QString pt, QTextCharFormat fm)
      : context(ct), pattern(pt), format(fm)
      {}
      
      QString context;
      QRegExp pattern;
      QTextCharFormat format;
};
      
typedef QList<HighlightRule> HighlightRuleList;
    
class QDEVKITUI_EXPORT Highlighter : public QSyntaxHighlighter
{
   Q_OBJECT

   public:
      /* Public methods */
      explicit Highlighter(const QString& context = QString(), QTextDocument *parent = 0);
      ~Highlighter();

      int fontSize;
      QString fontFamily;

      int size();
      void load();
      void save();
      void clear();
      void append(const QString& context, const QString& pattern, const QTextCharFormat& fmt);
      void append(HighlightRule rule);
      void setContext(const QString& context);
      const QString& context();

      /* Accessors */
      HighlightRuleList& list() const;
      HighlightRule* rule(int index);

      /* Operators */
      Highlighter& operator<<(HighlightRule rule)
      { append(rule); return *this; }

      HighlightRule* operator[](int index)
      { return rule(index); }
      
   protected:
      void highlightBlock(const QString &text);
      
   private:
      class Private;
      Private *d;

};

#endif
