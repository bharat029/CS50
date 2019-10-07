from cs50 import get_int


def get_height():
    height = 0

    while height <= 0 or height > 8:
        height = get_int("Height: ")

    return height


height = get_height()

for i in range(1, height + 1):
    for j in range(height - i):
        print(" ", end="")

    for k in range(i):
        print("#", end="")

    print()