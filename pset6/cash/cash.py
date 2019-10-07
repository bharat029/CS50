from cs50 import get_float


def get_change():
    change = -1

    while change < 0:
        change = get_float("Change: ")

    return int(change * 100)


change = get_change()
coins = 0

while change > 0:
    if change >= 25:
        change -= 25
        coins += 1
    elif change >= 10:
        change -= 10
        coins += 1
    elif change >= 5:
        change -= 5
        coins += 1
    else:
        change -= 1
        coins += 1

print(coins)