import eulerlib

LIMIT = 10**8

primes = eulerlib.prime_sieve(LIMIT + 1)
print("Primes generated")

total = 0

for num in range(LIMIT + 1):
    # PGI (prime generating integer) will always be 1 less than a prime number
    if primes[num + 1] == False:
        continue

    # if num is divisible by 4, it is not a PGI
    if num % 4 == 0:
        continue

    isPGI = True

    for d in range(2, int(num**0.5) + 1):
        # if d is a divisor
        if num % d == 0:
            # p is the prime number we are looking for
            p = d + int(num/d)

            if primes[p] == False:
                isPGI = False
                break

    if isPGI == True:
        total += num

print(total) 
