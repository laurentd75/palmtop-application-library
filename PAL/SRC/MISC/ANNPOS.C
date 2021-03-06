/* --------------------------------------------------------------------
   Project: PAL: Palmtop Application Library
   Module:  ANNPOS.C
   Author:  Harry Konstas/Gilles Kohl
   Started: 10. Nov. 94
   Subject: Position annunciators on display
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
   AnnuncPos:
   Position shift key annunciators either left or right. Position can
   either be AN_LEFT or AN_RIGHT.
   -------------------------------------------------------------------- */

void AnnuncPos(int Position)
{
   CallInt(0x15, 0x6100 | Position, 0, 0, 0, NULL);
}

