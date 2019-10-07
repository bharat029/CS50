from cs50 import get_string
from sys import argv


def main():
    if not len(argv) == 2:
        print("Usage: python bleep.py dictionary")
        return 1

    banned_words = None
    with open(argv[1], 'r') as file:
        banned_words = set([word.strip() for word in file.readlines()])

    msg = input("What message would you like to censor?\n")

    for word in msg.split():
        if word.lower() in banned_words:
            print("*" * len(word), end="")
        else:
            print(word, end="")
        print(" ", end="")

    print()


if __name__ == "__main__":
    main()
