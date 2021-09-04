/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int c = 0; // I won't change c, promise!
    int i = 42;      // decimal constant value: 42
    int j = 042;     // octal constant value: 34
    int k = 0x42;    // hexadecimal constant value: 66

    printf("i:%d j:%d k:%d\n", i, j, k);
    printf("i:%o j:%o k:%o\n", i, j, k);
    printf("i:%x j:%x k:%x\n", i, j, k);

    return 0xc1a0;
}
