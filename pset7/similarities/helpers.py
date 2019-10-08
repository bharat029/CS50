from nltk.tokenize import sent_tokenize


def lines(a, b):
    """Return lines in both a and b"""

    a = a.split('\n')
    b = b.split('\n')

    res = set()

    for line in a:
        if line in b:
            res.add(line)

    return list(res)


def sentences(a, b):
    """Return sentences in both a and b"""

    a = sent_tokenize(a)
    b = sent_tokenize(b)

    res = set()

    for sent in a:
        if sent in b:
            res.add(sent)

    return list(res)


def substrings(a, b, n):
    """Return substrings of length n in both a and b"""

    subsA = []
    subsB = []
    res = set()

    for i in range(len(a) - n + 1):
        subsA.append(a[i: i + n])

    for i in range(len(b) - n + 1):
        subsB.append(b[i: i + n])

    for subs in subsA:
        if subs in subsB:
            res.add(subs)

    return list(res)
