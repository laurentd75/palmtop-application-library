/* --------------------------------------------------------------------
   Project: PAL: Palmtop Application Library
   Module:  CHECKSM.C
   Author:  Harry Konstas
   Started: 4 Jan. 1995
   Subject: Check if SysMgr is loaded.
   -------------------------------------------------------------------- */

/* --------------------------------------------------------------------
                           standard includes
   -------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>

/* --------------------------------------------------------------------
                           local includes
   -------------------------------------------------------------------- */

#include "pal.h"
#include "palpriv.h"

/* --------------------------------------------------------------------
                      constant definitions
   -------------------------------------------------------------------- */
#define IRET_CODE 0xCF

/* --------------------------------------------------------------------
                        type definitions
   -------------------------------------------------------------------- */

typedef unsigned char far *VECTOR;

/* --------------------------------------------------------------------
                        global variables
   -------------------------------------------------------------------- */
VECTOR far *IntVectors = (VECTOR far *)0L;

/* --------------------------------------------------------------------
                           Functions
   -------------------------------------------------------------------- */

/* --------------------------------------------------------------------
   CheckSysMgr:
   Checks if the System Manager is loaded. Returns TRUE if SysMgr is
   present, FALSE when it is not available.
   -------------------------------------------------------------------- */
int CheckSysMgr(void)
{
   return IntVectors[0x7e] != NULL && *IntVectors[0x7e] != IRET_CODE &&
          IntVectors[0x7f] != NULL && *IntVectors[0x7f] != IRET_CODE;
}

