/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2020 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

/* Mac virtual key code to SDL scancode mapping table
   Sources:
   - Inside Macintosh: Text <http://developer.apple.com/documentation/mac/Text/Text-571.html>
   - Apple USB keyboard driver source <http://darwinsource.opendarwin.org/10.4.6.ppc/IOHIDFamily-172.8/IOHIDFamily/Cosmo_USB2ADB.c>
   - experimentation on various ADB and USB ISO keyboards and one ADB ANSI keyboard
*/
/* *INDENT-OFF* */
static const SDL_Scancode pocketgo30_scancode_table[] = {
    /*   0 */   SDL_SCANCODE_UNKNOWN,
    /*   1 */   SDL_SCANCODE_UNKNOWN,
    /*   2 */   SDL_SCANCODE_UNKNOWN,
    /*   3 */   SDL_SCANCODE_UNKNOWN,
    /*   4 */   SDL_SCANCODE_UNKNOWN,
    /*   5 */   SDL_SCANCODE_UNKNOWN,
    /*   6 */   SDL_SCANCODE_UNKNOWN,
    /*   7 */   SDL_SCANCODE_UNKNOWN,
    /*   8 */   SDL_SCANCODE_UNKNOWN,
    /*   9 */   SDL_SCANCODE_UNKNOWN,
    /*  10 */   SDL_SCANCODE_UNKNOWN,
    /*  11 */   SDL_SCANCODE_UNKNOWN,
    /*  12 */   SDL_SCANCODE_UNKNOWN,
    /*  13 */   SDL_SCANCODE_UNKNOWN,
    /*  14 */   SDL_SCANCODE_UNKNOWN,
    /*  15 */   SDL_SCANCODE_UNKNOWN,
    /*  16 */   SDL_SCANCODE_UNKNOWN,
    /*  17 */   SDL_SCANCODE_UNKNOWN,
    /*  18 */   SDL_SCANCODE_UNKNOWN,
    /*  19 */   SDL_SCANCODE_UNKNOWN,
    /*  20 */   SDL_SCANCODE_UNKNOWN,
    /*  21 */   SDL_SCANCODE_UNKNOWN,
    /*  22 */   SDL_SCANCODE_UNKNOWN,
    /*  23 */   SDL_SCANCODE_UNKNOWN,
    /*  24 */   SDL_SCANCODE_UNKNOWN,
    /*  25 */   SDL_SCANCODE_UNKNOWN,
    /*  26 */   SDL_SCANCODE_UNKNOWN,
    /*  27 */   SDL_SCANCODE_UNKNOWN,
    /*  28 */   SDL_SCANCODE_UNKNOWN,
    /*  29 */   SDL_SCANCODE_UNKNOWN,
    /*  30 */   SDL_SCANCODE_UNKNOWN,
    /*  31 */   SDL_SCANCODE_UNKNOWN,
    /*  32 */   SDL_SCANCODE_UNKNOWN,
    /*  33 */   SDL_SCANCODE_UNKNOWN,
    /*  34 */   SDL_SCANCODE_UNKNOWN,
    /*  35 */   SDL_SCANCODE_UNKNOWN,
    /*  36 */   SDL_SCANCODE_UNKNOWN,
    /*  37 */   SDL_SCANCODE_UNKNOWN,
    /*  38 */   SDL_SCANCODE_UNKNOWN,
    /*  39 */   SDL_SCANCODE_UNKNOWN,
    /*  40 */   SDL_SCANCODE_UNKNOWN,
    /*  41 */   SDL_SCANCODE_UNKNOWN,
    /*  42 */   SDL_SCANCODE_UNKNOWN,
    /*  43 */   SDL_SCANCODE_UNKNOWN,
    /*  44 */   SDL_SCANCODE_UNKNOWN,
    /*  45 */   SDL_SCANCODE_UNKNOWN,
    /*  46 */   SDL_SCANCODE_UNKNOWN,
    /*  47 */   SDL_SCANCODE_UNKNOWN,
    /*  48 */   SDL_SCANCODE_UNKNOWN,
    /*  49 */   SDL_SCANCODE_UNKNOWN,
    /*  50 */   SDL_SCANCODE_UNKNOWN,
    /*  51 */   SDL_SCANCODE_UNKNOWN,
    /*  52 */   SDL_SCANCODE_UNKNOWN,
    /*  53 */   SDL_SCANCODE_UNKNOWN,
    /*  54 */   SDL_SCANCODE_UNKNOWN,
    /*  55 */   SDL_SCANCODE_UNKNOWN,
    /*  56 */   SDL_SCANCODE_UNKNOWN,
    /*  57 */   SDL_SCANCODE_UNKNOWN,
    /*  58 */   SDL_SCANCODE_UP,
    /*  59 */   SDL_SCANCODE_DOWN,
    /*  60 */   SDL_SCANCODE_LEFT,
    /*  61 */   SDL_SCANCODE_RIGHT,
    /*  62 */   SDL_SCANCODE_B,
    /*  63 */   SDL_SCANCODE_Y,
    /*  64 */   SDL_SCANCODE_A,
    /*  65 */   SDL_SCANCODE_X,
    /*  66 */   SDL_SCANCODE_SELECT,
    /*  67 */   SDL_SCANCODE_RETURN,
    /*  68 */   SDL_SCANCODE_UNKNOWN,
    /*  69 */   SDL_SCANCODE_KP_PLUS,
    /*  70 */   SDL_SCANCODE_KP_MINUS,
    /*  71 */   SDL_SCANCODE_KP_LEFTPAREN,
    /*  72 */   SDL_SCANCODE_KP_RIGHTBRACE,
    /*  73 */   SDL_SCANCODE_KP_LEFTBRACE,
    /*  74 */   SDL_SCANCODE_KP_RIGHTPAREN,
    /*  75 */   SDL_SCANCODE_UNKNOWN,
    /*  76 */   SDL_SCANCODE_UNKNOWN,
    /*  77 */   SDL_SCANCODE_UNKNOWN,
    /*  78 */   SDL_SCANCODE_UNKNOWN,
    /*  79 */   SDL_SCANCODE_UNKNOWN,
    /*  80 */   SDL_SCANCODE_UNKNOWN,
    /*  81 */   SDL_SCANCODE_UNKNOWN,
    /*  82 */   SDL_SCANCODE_UNKNOWN,
    /*  83 */   SDL_SCANCODE_UNKNOWN,
    /*  84 */   SDL_SCANCODE_UNKNOWN,
    /*  85 */   SDL_SCANCODE_UNKNOWN,
    /*  86 */   SDL_SCANCODE_UNKNOWN,
    /*  87 */   SDL_SCANCODE_UNKNOWN,
    /*  88 */   SDL_SCANCODE_UNKNOWN,
    /*  89 */   SDL_SCANCODE_UNKNOWN,
    /*  90 */   SDL_SCANCODE_UNKNOWN,
    /*  91 */   SDL_SCANCODE_UNKNOWN,
    /*  92 */   SDL_SCANCODE_UNKNOWN,
    /*  93 */   SDL_SCANCODE_UNKNOWN,
    /*  94 */   SDL_SCANCODE_UNKNOWN,
    /*  95 */   SDL_SCANCODE_UNKNOWN,
    /*  96 */   SDL_SCANCODE_UNKNOWN,
    /*  97 */   SDL_SCANCODE_UNKNOWN,
    /*  98 */   SDL_SCANCODE_UNKNOWN,
    /*  99 */   SDL_SCANCODE_UNKNOWN,
    /* 100 */   SDL_SCANCODE_UNKNOWN,
    /* 101 */   SDL_SCANCODE_UNKNOWN,
    /* 102 */   SDL_SCANCODE_UNKNOWN,
    /* 103 */   SDL_SCANCODE_UNKNOWN,
    /* 104 */   SDL_SCANCODE_UNKNOWN,
    /* 105 */   SDL_SCANCODE_UNKNOWN,
    /* 106 */   SDL_SCANCODE_UNKNOWN,
    /* 107 */   SDL_SCANCODE_UNKNOWN,
    /* 108 */   SDL_SCANCODE_UNKNOWN,
    /* 109 */   SDL_SCANCODE_UNKNOWN,
    /* 110 */   SDL_SCANCODE_UNKNOWN,
    /* 111 */   SDL_SCANCODE_UNKNOWN,
    /* 112 */   SDL_SCANCODE_UNKNOWN,
    /* 113 */   SDL_SCANCODE_UNKNOWN,
    /* 114 */   SDL_SCANCODE_UNKNOWN,
    /* 115 */   SDL_SCANCODE_UNKNOWN,
    /* 116 */   SDL_SCANCODE_POWER,
    /* 117 */   SDL_SCANCODE_UNKNOWN,
    /* 118 */   SDL_SCANCODE_UNKNOWN,
    /* 119 */   SDL_SCANCODE_UNKNOWN,
    /* 120 */   SDL_SCANCODE_UNKNOWN,
    /* 121 */   SDL_SCANCODE_UNKNOWN,
    /* 122 */   SDL_SCANCODE_UNKNOWN,
    /* 123 */   SDL_SCANCODE_UNKNOWN,
    /* 124 */   SDL_SCANCODE_UNKNOWN,
    /* 125 */   SDL_SCANCODE_UNKNOWN,
    /* 126 */   SDL_SCANCODE_UNKNOWN,
    /* 127 */   SDL_SCANCODE_UNKNOWN
};
/* *INDENT-ON* */
