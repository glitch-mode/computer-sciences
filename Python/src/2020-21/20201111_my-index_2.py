#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/


def main():
    """Main entry point"""
    foo = list("Giovanni Adolfo Pietro Pio Squillero")
    pos = my_index(foo, "i")
    print(pos)


def my_index(list_, element):
    """Returns a list with all the positions of element in list_"""
    pos = []
    for i, e in enumerate(list_):
        if e == element:
            pos.append(i)
    return pos


if __name__ == '__main__':  # BLACK MAGIC!
    main()