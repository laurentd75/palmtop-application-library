/* --------------------------------------------------------------------
   Project: PAL: Palmtop Application Library
   Module:  EMSLASTR.C
   Author:  Gilles Kohl
   Started: 08. Oct. 95
   Subject: Return last error reported by an EMS routine
   -------------------------------------------------------------------- */

/* --------------------------------------------------------------------
                            msdos includes
   -------------------------------------------------------------------- */
#include <dos.h>

/* --------------------------------------------------------------------
                           local includes
   -------------------------------------------------------------------- */
#include "pal.h"
#include "palpriv.h"

/* --------------------------------------------------------------------
                           Functions
   -------------------------------------------------------------------- */

/* --------------------------------------------------------------------
   EmsLastError:
   Return last error reported by an EMS routine, or 0 if no error
   -------------------------------------------------------------------- */

int EmsLastError(void)
{
   return EmsErr;
}

