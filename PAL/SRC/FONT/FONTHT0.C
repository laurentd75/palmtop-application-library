/* --------------------------------------------------------------------
   Project: PAL: Palmtop Application Library
   Module:  FONTHT0.C
   Author:  Gilles Kohl
   Started: 17. Dec. 94
   Subject: Unified font support: Trivial version of FontHeight
   -------------------------------------------------------------------- */

/* --------------------------------------------------------------------
                          standard includes
   -------------------------------------------------------------------- */
#include <stdlib.h>
#include <stdio.h>

/* --------------------------------------------------------------------
                           local includes
   -------------------------------------------------------------------- */
#include "pal.h"
#include "palpriv.h"

/* --------------------------------------------------------------------
                            global variables
   -------------------------------------------------------------------- */
int (*FontHeight)(int FntId) = FontHeight0;


/* --------------------------------------------------------------------
                              Functions
   -------------------------------------------------------------------- */

/* ------------------------------------------------------------
   FontHeight0:
   Computes height of a built-in font
   ------------------------------------------------------------ */

int FontHeight0(int FntId)
{
   return FNTD(FntId);
}


