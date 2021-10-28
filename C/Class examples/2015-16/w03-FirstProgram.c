/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

/*
 * My very first C program!
 */

int main(int argc, char *argv[])
{
    printf("The first program\n=================\n\n");

    int foo;
    printf("Insert a value: ");
    scanf("%d", &foo);

    printf("%d is ", foo);
    if (foo % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    printf("\n");

    if (foo == 42)
    {
        printf("\n\n... long live Douglas\n");
    }

    return EXIT_SUCCESS;
}