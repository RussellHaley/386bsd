/* Copyright (C) 1989 Aladdin Enterprises.  All rights reserved.
   Distributed by Free Software Foundation, Inc.

This file is part of Ghostscript.

Ghostscript is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY.  No author or distributor accepts responsibility
to anyone for the consequences of using it or for whether it serves any
particular purpose or works at all, unless he says so in writing.  Refer
to the Ghostscript General Public License for full details.

Everyone is granted permission to copy, modify and redistribute
Ghostscript, but only under the conditions described in the Ghostscript
General Public License.  A copy of this license is supposed to have been
given to you along with Ghostscript so you can know your rights and
responsibilities.  It should be in a file named COPYING.  Among other
things, the copyright notice and this notice must be preserved on all
copies.  */

/* malloc_.h */
/* Generic substitute for Unix malloc.h */

#ifdef __TURBOC__
#  include <alloc.h>
#else
#  ifdef VMS
     extern char *malloc();
     extern void free();
#  else
#    if defined(BSD4_2) || defined(apollo) || defined(vax) || defined(sequent) || defined(UTEK) || defined(_IBMR2)
       extern char *malloc();
#    else
#      if defined(_HPUX_SOURCE)
#        include <stdlib.h>
#      else
#	if defined(__386BSD__)
#        include <stdlib.h>
#	else
#        include <malloc.h> 
#	endif
#      endif				/* !_HPUX_SOURCE, ... */
#    endif				/* !BSD4_2, ... */
#  endif				/* !VMS */
#endif					/* !__TURBOC__ */
