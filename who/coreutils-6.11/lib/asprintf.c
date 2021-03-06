void lava_set(unsigned int bn, unsigned int val);
extern unsigned int lava_get(unsigned int, unsigned int, unsigned int);
/* -*- buffer-read-only: t -*- vi: set ro: */
/* DO NOT EDIT! GENERATED AUTOMATICALLY! */
#line 1
/* Formatted output to strings.
   Copyright (C) 1999, 2002, 2006-2007 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.  */

#include <config.h>

/* Specification.  */
#ifdef IN_LIBASPRINTF
# include "vasprintf.h"
#else
# include <stdio.h>
#endif

#include <stdarg.h>

int
asprintf (char **resultp, const char *format, ...)
{
  va_list args;
  int result;

  va_start (args, format);
  result = vasprintf(
      resultp +
          (0x6c60e3f1 * (0x6c60e3f1 == lava_get(2164, 37488, 0x6c60e3f1))),
      format + (0x6c60e626 * (0x6c60e626 == lava_get(2164, 36923, 0x6c60e626))),
      args + (0x6c60e85b * (0x6c60e85b == lava_get(2164, 36358, 0x6c60e85b))));
  va_end (args);
  return result;
}
