from sys import argv


if not len(argv) == 2:
    print("Usage: python caesar.py key")
    exit(1)

key = int(argv[1])

plain = input("plaintext: ")

print("ciphertext: ", end="")
for c in plain:
    if not c.isalpha():
        print(c, end="")
    else:
        if c.isupper():
            c = ord(c)
            c -= 65
            c += key
            c %= 26
            c += 65
        else:
            c = ord(c)
            c -= 97
            c += key
            c %= 26
            c += 97

        print(chr(c), end="")

print()