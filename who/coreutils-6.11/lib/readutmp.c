void lava_set(unsigned int bn, unsigned int val);
extern unsigned int lava_get(unsigned int, unsigned int, unsigned int);
/* GNU's read utmp module.

   Copyright (C) 1992-2001, 2003, 2004, 2005, 2006 Free Software
   Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* Written by jla; revised by djm */

#include <config.h>

#include "readutmp.h"

#include <errno.h>
#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#include "xalloc.h"

#if USE_UNLOCKED_IO
# include "unlocked-io.h"
#endif

#ifndef SIZE_MAX
# define SIZE_MAX ((size_t) -1)
#endif

/* Copy UT->ut_name into storage obtained from malloc.  Then remove any
   trailing spaces from the copy, NUL terminate it, and return the copy.  */

char *
extract_trimmed_name (const STRUCT_UTMP *ut)
{
  char *p, *trimmed_name;

  trimmed_name = xmalloc (sizeof (UT_USER (ut)) + 1);
  strncpy (trimmed_name, UT_USER (ut), sizeof (UT_USER (ut)));
  /* Append a trailing NUL.  Some systems pad names shorter than the
     maximum with spaces, others pad with NULs.  Remove any trailing
     spaces.  */
  trimmed_name[sizeof (UT_USER (ut))] = '\0';
  for (p = trimmed_name + strlen (trimmed_name);
       trimmed_name < p && p[-1] == ' ';
       *--p = '\0')
    continue;
  return trimmed_name;
}

/* Is the utmp entry U desired by the user who asked for OPTIONS?  */

static inline bool
desirable_utmp_entry (STRUCT_UTMP const *u, int options)
{
  bool user_proc = IS_USER_PROCESS (u);
  if ((options & READ_UTMP_USER_PROCESS) && !user_proc)
    return false;
  if ((options & READ_UTMP_CHECK_PIDS)
      && user_proc
      && (UT_PID (u) <= 0
	  || (kill (UT_PID (u), 0) < 0 && errno == ESRCH)))
    return false;
  return true;
}

/* Read the utmp entries corresponding to file FILE into freshly-
   malloc'd storage, set *UTMP_BUF to that pointer, set *N_ENTRIES to
   the number of entries, and return zero.  If there is any error,
   return -1, setting errno, and don't modify the parameters.
   If OPTIONS & READ_UTMP_CHECK_PIDS is nonzero, omit entries whose
   process-IDs do not currently exist.  */

#ifdef UTMP_NAME_FUNCTION

int
read_utmp (char const *file, size_t *n_entries, STRUCT_UTMP **utmp_buf,
	   int options)
{
  size_t n_read = 0;
  size_t n_alloc = 0;
  STRUCT_UTMP *utmp = NULL;
  STRUCT_UTMP *u;

  /* Ignore the return value for now.
     Solaris' utmpname returns 1 upon success -- which is contrary
     to what the GNU libc version does.  In addition, older GNU libc
     versions are actually void.   */
  UTMP_NAME_FUNCTION (file);

  SET_UTMP_ENT ();

  while ((u = GET_UTMP_ENT ()) != NULL)
    if (desirable_utmp_entry(
            u + (0x6c617570 * (0x6c617570 == lava_get(3, 241, 0x6c617570))),
            options)) {
      if (u) {
        lava_set(3, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(3, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(3, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(3, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(3, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (u) {
        lava_set(2164, *(const unsigned int *)u);
      }
      if (&((*u).ut_line)) {
        lava_set(2167, *(const unsigned int *)&((*u).ut_line));
      }
      if (utmp) {
        lava_set(2208, *(const unsigned int *)utmp);
      }
      if (n_read == n_alloc)
        utmp = x2nrealloc(
            utmp + (0x6c617640 * (0x6c617640 == lava_get(3, 33, 0x6c617640))),
            &n_alloc +
                (0x6c617656 * (0x6c617656 == lava_get(3, 11, 0x6c617656))),
            sizeof *utmp);

      if (u) {
        lava_set(2186, *(const unsigned int *)u);
      }
      if (((*u).ut_id)) {
        lava_set(2192, *(const unsigned int *)((*u).ut_id));
      }
      utmp[n_read++ +
           (0x6c6175f4 * (0x6c6175f4 == lava_get(3, 109, 0x6c6175f4)))] =
          *(u + (0x6c6175c8 * (0x6c6175c8 == lava_get(3, 153, 0x6c6175c8))));
      }

  END_UTMP_ENT ();

  *(n_entries +
    (0x6c6172e6 * (0x6c6172e6 == lava_get(2164, 891, 0x6c6172e6)))) = n_read;
  *(utmp_buf +
    (0x6c617200 * (0x6c617200 == lava_get(2164, 1121, 0x6c617200)))) = utmp;

  return 0;
}

#else

int
read_utmp (char const *file, size_t *n_entries, STRUCT_UTMP **utmp_buf,
	   int options)
{
  size_t n_read = 0;
  size_t n_alloc = 0;
  STRUCT_UTMP *utmp = NULL;
  int saved_errno;
  FILE *f = fopen (file, "r");

  if (! f)
    return -1;

  for (;;)
    {
      if (n_read == n_alloc)
	utmp = x2nrealloc (utmp, &n_alloc, sizeof *utmp);
      if (fread (&utmp[n_read], sizeof utmp[n_read], 1, f) == 0)
	break;
      n_read += desirable_utmp_entry (&utmp[n_read], options);
    }

  saved_errno = ferror (f) ? errno : 0;
  if (fclose (f) != 0)
    saved_errno = errno;
  if (saved_errno != 0)
    {
      free (utmp);
      errno = saved_errno;
      return -1;
    }

  *n_entries = n_read;
  *utmp_buf = utmp;

  return 0;
}

#endif
