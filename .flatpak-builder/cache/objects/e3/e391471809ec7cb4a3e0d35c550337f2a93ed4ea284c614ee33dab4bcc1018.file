/***************************************************************************
*   Copyright (C) 2009 Marek Vavrusa <marek@vavrusa.com>                  *
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
#ifndef __common_h__
#define __common_h__
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include "liburpc_export.h"

/** Symbolic constants.
  */
#define SHM_KEY  (0x2a2a2a2a)
#define SHM_SIZE (512) // At least size of int, SHMMIN may be enforced (!)

/** Log level.
  */
enum LogLevel
{
    MsgNull  = 0, // No output
    MsgError = 1, // Print error messages
    MsgLog   = 2, // Print error and log messages
    MsgDebug = 4  // Debug output
};

/* Debugging and symbol loading macros.
 */

#define UNUSED(x) (x) = (x)

#ifdef __cplusplus
extern "C"
{
#endif

/** Return loglevel.
  */
URPC_EXPORT int log_level();

/** Set loglevel.
  * \param flags loglevel bitfield (see enum LogLevel).
  * \return old value
  */
URPC_EXPORT int log_setlevel(int flags);

/** Log message.
  */
static inline void log_msg(const char* fmt, ...)
{
	if (log_level() & MsgLog) {
		va_list ap;
		va_start (ap, fmt);
		vprintf(fmt, ap);
		va_end (ap);
	}
}

/** Error message.
  */
static inline void error_msg(const char* fmt, ...)
{
	if (log_level() & MsgError) {
		va_list ap;
		va_start (ap, fmt);
		vfprintf(stderr, fmt, ap);
		va_end (ap);
		fprintf(stderr, "\n");
	}
}

/** Debug message.
  */
#ifdef DEBUG
static inline void debug_msg(const char* fmt, ...)
{
	if (log_level() & MsgDebug) {
		va_list ap;
		va_start (ap, fmt);
		vfprintf(stderr, fmt, ap);
		va_end (ap);
	}
}
#else
static inline void debug_msg(const char* fmt, ...)
{
	fmt = fmt; // To prevent compiler warnings
}
#endif

/** Debug macro for marking functions deprecated. */
#ifdef DEBUG
#ifdef __GNUC__
#define DEPRECATED __attribute__ ((deprecated))
#else
#define DEPRECATED
#endif
#endif

/* Deprecated functions / macros.
 */

#if 0
#include <dlfcn.h>

/** Load next symbol from linked shared libraries.
  * Return error if not found and exit with error state (1).
  */
#define READ_SYM(sym, ident) { \
   if((sym) == NULL) { \
      (sym) = dlsym(RTLD_NEXT, (ident)); \
      char* __res = dlerror(); \
      if (__res != NULL) { \
         fprintf(stderr, "[!!] %s:%d: READ_SYM(%s): %s\n", filename(__FILE__), __LINE__, (ident), __res); \
         exit(1); \
      } \
   } \
}
#endif

#ifdef __cplusplus
}
#endif

#endif // __common_h__
