/* --------------------------------------------------------------------
   Project: PAL: Palmtop Application Library
   Module:  TEXTMODE.C
   Author:  Harry Konstas/Gilles Kohl
   Started: 10. Nov. 94
   Subject:
   -------------------------------------------------------------------- */

/* --------------------------------------------------------------------
                          standard includes
   -------------------------------------------------------------------- */
#include <stdlib.h>

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
   TextMode:
   Switch to text mode.
   -------------------------------------------------------------------- */

int TextMode(void)
{
   if(!Check5f()) return FALSE;
   CallInt(0x5f, 3, 0, 0, 0, NULL);
}


