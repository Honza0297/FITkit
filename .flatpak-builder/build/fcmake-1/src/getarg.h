/***************************************************************************
 *   Copyright (C) 2008 Brno University of Technology,                     *
 *   Faculty of Information Technology                                     *
 *   Author(s): Marek Vavrusa    <xvavru00 AT stud.fit.vutbr.cz>           *
 *              Zdenek Vasicek   <vasicek  AT fit.vutbr.cz>                *
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

#ifndef GETARG_H
#define GETARG_H

#include <vector>
#include "fcmake_export.h"

namespace Arg
{

struct FCMAKE_EXPORT Param
{
   Param(char c = -1, const char* n = "", const char* d = "")
   : code(c), name(n), desc(d)
   {}

   char code;
   const char* name;
   const char* desc;

};

class FCMAKE_EXPORT List : public std::vector<Param>
{
   public:
      List(int argc, char* argv[])
      : mCount(argc), mPos(1), mArgs(argv), mCurrent(0),
        mNotParam('\0', "Argument is not parameter.")
      {}

      // Inserting
      List& push_back(char c, const char* n, const char* d = "")
      { std::vector<Param>::push_back(Param(c,n,d)); return *this; }

      List& operator<<(Param& p)
      { std::vector<Param>::push_back(p); return *this; }

      // Iterating
      Param* next();

      // Current
      const char* arg() const
      { return mArgs[mPos - 1]; }

      const Param* param() const
      { return mCurrent; }

   private:
      int mCount;     //!< Number of arguments
      int mPos;       //!< Index of current arg
      char** mArgs;  //!< Array of arguments
      Param* mCurrent;//!< Current parameter
      Param mNotParam;  //!< Special: arg is not parameter
};

Param* List::next()
{
   // Get next arg
   Param* ret = 0;
   int arglen = 0;
   bool have_match = false;
   char code_s[] = { '-',  '\0', '\0' };
   for(int i = mPos; i < mCount; ++i)
   {
      have_match = false;
      arglen = strlen(mArgs[i]);

      // Find match
      if(arglen > 1 && mArgs[i][0] == '-')
      {
         // Have match?
         for(iterator it = begin(); it < end(); ++it)
         {
            code_s[1] = (*it).code;
            if(strcmp(mArgs[i], code_s) == 0 || strcmp(mArgs[i], (*it).name) == 0)
            {
               // Store matching arg
               ret = &*it;
               have_match = true;
               break;
            }
         }
      }
      else
      {
        ret = &mNotParam; // This is not parameter
        have_match = true;
      }

      // Next arg
      mPos = i + 1; // TODO: if Param is flagged for requiring parameter, +2

      // Break if have match
      if(!have_match)
         fprintf(stderr, "warning: parameter \'%s\' omitted\n", mArgs[i]);
      else
         break;
   }

   // Store current parameter
   mCurrent = ret;

   // Check output
   if(ret == 0)
      mPos = 0;

   return ret;
}

}

#endif

