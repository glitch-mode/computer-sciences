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
    int number;

    printf("Primes:");
    number = 0;
    while (number < 10000)
    {
        number = number + 1;

        int cnt = 0;
        int i = 1;
        while (i <= number)
        {
            if (number % i == 0)
            {
                cnt = cnt + 1;
            }
            i = i + 1;
        }
        if (cnt == 2)
        {
            printf(" %d", number);
        }
    }
    printf("\n");

    return 0;
}