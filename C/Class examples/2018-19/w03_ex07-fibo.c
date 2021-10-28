/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a, b, c;

    printf("Fibonacci: 0 1");
    b = 0;
    c = 1;

    int i = 0;
    while (i < 100)
    {
        a = b;
        b = c;
        c = a + b;
        printf(" %d", c);
        i = i + 1;
    }
    printf("\n");

    return 0;
}