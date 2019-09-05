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

#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QFile>
#include <QDir>
#include <QFileInfo>
#include <QFileDialog>

#include "fileselector.h"

class FileSelector::Private
{
   public:
      Private()
      {}

      FileSelector::Mode mode;
      QString caption;
      QString pattern;
      QLabel* lbFile;
      QLineEdit* file;
      QPushButton* btSelect;
};

FileSelector::FileSelector(QWidget* parent, const QString& caption)
   : QWidget(parent), d(new Private())
{
   
   d->mode = File;
   d->file = new QLineEdit(this);
   d->btSelect = new QPushButton(QIcon(":/icons/22x22/folder.png"), "", this);
   d->btSelect->setFixedWidth(26);
   d->btSelect->setFixedHeight(26);
   d->btSelect->setFocusPolicy(Qt::TabFocus);

   QHBoxLayout* lt = new QHBoxLayout(this);
   lt->addWidget(d->file);
   lt->addWidget(d->btSelect);

   setCaption(caption);

   connect(d->btSelect, SIGNAL(clicked()), this, SLOT(openFile()));
   connect(d->file, SIGNAL(returnPressed()), this, SLOT(openFile()));
   connect(d->file, SIGNAL(textChanged(QString)), this, SLOT(check()));
}

FileSelector::~FileSelector()
{
   delete d;
}

QString FileSelector::absolutePath(const QString& file, Mode mode)
{
   QString path;

   if (file.isEmpty())
      return path;

   if (mode == Directory)
   {
      if (QFileInfo(file).isDir())
         path = QDir(file).absolutePath();

   } 
   else if (mode == File) 
   {
      if (QFileInfo(file).isFile())
         path = QFileInfo(file).absoluteFilePath();

      if ((path.isEmpty()) && (QFileInfo(file+".exe").isFile()))
         path = QFileInfo(file+".exe").absoluteFilePath();

      // Search in PATH
      if ((path.isEmpty()) && (QFileInfo("env:"+file).isFile()))
         path = QFileInfo("env:"+file).absoluteFilePath();

      if ((path.isEmpty()) && (QFileInfo("env:"+file+".exe").isFile()))
         path = QFileInfo("env:"+file+".exe").absoluteFilePath();

   }

   return path;
}

QString FileSelector::absolutePath()
{
   if (d->file == 0)
      return QString();

   return absolutePath(d->file->text(), d->mode);
}

bool FileSelector::check()
{
   bool found = false;

   if (!absolutePath().isEmpty())
      d->file->setStyleSheet("");
   else
      d->file->setStyleSheet("background-color: #FFE0E0;");

   emit(changed());
   
   return found;
}

void FileSelector::setMode(Mode mode)
{
   d->mode = mode;
}

void FileSelector::setFilePattern(const QString& pattern)
{
   d->pattern = pattern;
}

void FileSelector::setDefault(const QString& file)
{
   if(d->file->text().isEmpty())
      d->file->setText(file);
}

void FileSelector::setCaption(const QString& caption)
{
   d->caption = caption;
}

QString FileSelector::openFile()
{
   // Select directory
   QString defPath = QDir::homePath();


   QString file;
   if(d->mode == File)
   {
      if(!d->file->text().isEmpty())
         defPath = QFileInfo(d->file->text()).absolutePath();

      file = QFileDialog::getOpenFileName(this, d->caption, defPath, d->pattern);
   }
   else
   {
      if(!d->file->text().isEmpty())
         defPath = QDir(d->file->text()).absolutePath();

      file = QFileDialog::getExistingDirectory(this, d->caption, defPath,
                                               QFileDialog::ShowDirsOnly|QFileDialog::DontResolveSymlinks);
   }

   if(!file.isEmpty())
      d->file->setText(file);

   emit(changed());

   return d->file->text();
}

QString FileSelector::file()
{
   return d->file->text();
}

QLineEdit& FileSelector::lineEdit()
{
   return *d->file;
}

#include "fileselector.moc"
