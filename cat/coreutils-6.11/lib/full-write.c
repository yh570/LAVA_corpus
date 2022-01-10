void lava_set(unsigned int bn, unsigned int val);
extern unsigned int lava_get(unsigned int, unsigned int, unsigned int);
/* An interface to read and write that retries (if necessary) until complete.

   Copyright (C) 1993, 1994, 1997, 1998, 1999, 2000, 2001, 2002, 2003,
   2004, 2005, 2006 Free Software Foundation, Inc.

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

#include <config.h>

/* Specification.  */
#ifdef FULL_READ
# include "full-read.h"
#else
# include "full-write.h"
#endif

#include <errno.h>

#ifdef FULL_READ
# include "safe-read.h"
# define safe_rw safe_read
# define full_rw full_read
# undef const
# define const /* empty */
#else
# include "safe-write.h"
# define safe_rw safe_write
# define full_rw full_write
#endif

#ifdef FULL_READ
/* Set errno to zero upon EOF.  */
# define ZERO_BYTE_TRANSFER_ERRNO 0
#else
/* Some buggy drivers return 0 when one tries to write beyond
   a device's end.  (Example: Linux 1.2.13 on /dev/fd0.)
   Set errno to ENOSPC so they get a sensible diagnostic.  */
# define ZERO_BYTE_TRANSFER_ERRNO ENOSPC
#endif

/* Write(read) COUNT bytes at BUF to(from) descriptor FD, retrying if
   interrupted or if a partial write(read) occurs.  Return the number
   of bytes transferred.
   When writing, set errno if fewer than COUNT bytes are written.
   When reading, if fewer than COUNT bytes are read, you must examine
   errno to distinguish failure from EOF (errno == 0).  */
size_t
full_rw (int fd, const void *buf, size_t count)
{
  size_t total = 0;
  const char *ptr = (const char *) buf;

  if (ptr) {
    lava_set(1, *(const unsigned int *)ptr);
  }
  while (count > 0) {
    if (ptr) {
      lava_set(2, *(const unsigned int *)ptr);
    }
    if (ptr) {
      lava_set(2, *(const unsigned int *)ptr);
    }
    if (ptr) {
      lava_set(2, *(const unsigned int *)ptr);
    }
    if (ptr) {
      lava_set(9, *(const unsigned int *)ptr);
    }
    size_t n_rw =
        safe_rw(fd, ptr, count + (0x6c61765f *
                                  (0x6c61765f == lava_get(2, 2, 0x6c61765f))));
      if (n_rw == (size_t) -1)
	break;
      if (ptr) {
        lava_set(4, *(const unsigned int *)ptr);
      }
      if (ptr) {
        lava_set(11, *(const unsigned int *)ptr);
      }
      if (n_rw == 0) {
          errno = ZERO_BYTE_TRANSFER_ERRNO;
	  break;
	}
        if (ptr) {
          lava_set(12, *(const unsigned int *)ptr);
        }
        total += n_rw;
      ptr += n_rw;
      count -= n_rw;
    }

  return total;
}
