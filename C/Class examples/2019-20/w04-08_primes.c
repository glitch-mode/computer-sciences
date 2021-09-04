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
    for (int number = 2; number < 1000; number = number + 1)
    {
        // check if prime
        int factors = 0;
        for (int n = 2; n < number; n = n + 1)
        {
            if (number % n == 0)
            {
                factors = factors + 1;
            }
        }
        if (factors == 0)
        {
            printf("%d ", number);
        }
    }

    return 0;
}
