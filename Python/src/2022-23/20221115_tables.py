# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

from pprint import pprint

DIMX = 20
DIMY = 4


def main():
    table = list()
    for x in range(DIMY):
        table.append([0] * DIMX)
    table[2][3] = 6
    pprint(table)


if __name__ == '__main__':
    main()
