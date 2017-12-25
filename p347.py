import eulerlib

def M(p, q, N):
    m = 0

    i = p
    while True:
        # make j as large as possible so that i * j <= N
        j = q
        while True:
            if i * j * q > N:
                break
            j *= q

        # check if we've found a new max
        if i * j > m:
            m = i * j

        # check if i can be incremented so that i * q <= N
        if i * p * q > N:
            break
        i *= p

    return m

LIMIT = 10**7
primes = eulerlib.generate_primes(LIMIT//2)
total = 0

for i in range(len(primes)):
    if primes[i] * primes[i+1] > LIMIT:
        break
    for j in range(i+1, len(primes)):
        if primes[i] * primes[j] > LIMIT:
            break
        total += M(primes[i], primes[j], LIMIT)

print(total)
