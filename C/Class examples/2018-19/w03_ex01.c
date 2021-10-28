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
    double a;
    double b;

    scanf("%lg", &a);
    scanf("%lg", &b);

    double zap = a % b;

    if (a > b)
    {
        printf("Max is %g\n", a);
    }
    else
    {
        printf("Max is %g\n", b);
    }

    return 0;
}