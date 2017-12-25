import itertools

def init_hist(dice, sides):
    hist = {}

    for i in range(dice, dice*sides + 1):
        hist[i] = 0

    for tup in itertools.product(range(1, sides + 1), repeat=dice):
        hist[sum(tup)] += 1

    return hist

pyramidal_hist = init_hist(9, 4)
cubic_hist = init_hist(6, 6)

denom = 4**9 * 6**6
numer = 0

for i in range(9, 37):
    for j in range(6, i):
        numer += pyramidal_hist[i] * cubic_hist[j]

print("%.7f" % (numer/denom))
