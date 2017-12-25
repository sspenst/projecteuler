import eulerlib
import itertools
import math

LIMIT = 10**4

def concat(x, y):
    a = math.floor(math.log10(y))
    return int(x*10**(1+a)+y)

primes = eulerlib.generate_primes(LIMIT)

# generate all pairs of primes that can be concatenated to form primes
pairs = {}
for i in range(len(primes)):
    for j in range(i+1, len(primes)):
        p1 = primes[i]
        p2 = primes[j]
        if eulerlib.is_prime2(concat(p1, p2)) and eulerlib.is_prime3(concat(p2, p1)):
            if p1 not in pairs:
                pairs[p1] = [p2]
            else:
                pairs[p1].append(p2)

# search through all pairs to find prime pair triplets
trips = {}
for p in pairs:
    for tup in itertools.combinations(pairs[p], 2):
        if tup[0] in pairs and tup[1] in pairs[tup[0]]:
            trip = (p, tup[0])

            if trip not in trips:
                trips[trip] = [tup[1]]
            else:
                trips[trip].append(tup[1])

# search through all triplets to find prime pair quadruplets
quads = {}
for t in trips:
    for tup in itertools.combinations(trips[t], 2):
        if tup[0] in pairs and tup[1] in pairs[tup[0]]:
            quad = (t[0], t[1], tup[0])

            if quad not in quads:
                quads[quad] = [tup[1]]
            else:
                quads[quad].append(tup[1])

# search through all quadruplets to find prime pair quintuplets
quints = {}
for q in quads:
    for tup in itertools.combinations(quads[q], 2):
        if tup[0] in pairs and tup[1] in pairs[tup[0]]:
            quint = (q[0], q[1], q[2], tup[0])

            if quint not in quints:
                quints[quint] = [tup[1]]
            else:
                quints[quint].append(tup[1])

# find the minimum quintuplet sum
min_sum = None

for quint in quints:
    quint_sum = sum(quint) + min(quints[quint])
    if min_sum == None:
        min_sum = quint_sum
    elif quint_sum < min_sum:
        min_sum = quint_sum
        
print(min_sum)
