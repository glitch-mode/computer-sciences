#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/


def main():
    """Main entry point"""
    number = input("Number: ")
    base = int(input("Base: "))
    value = convert10(number, base)
    print(f"{number}|{base} = {value}|10")


def convert10(number, base):
    value = 0
    for n, d in enumerate(reversed(number)):
        value = value + int(d) * base**n
    return value


if __name__ == '__main__':
    main()