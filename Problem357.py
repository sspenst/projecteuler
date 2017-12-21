def generate_primes(n):
    """ Input n>=6, Returns a list of primes, 2 <= p < n """
    n, correction = n-n%6+6, 2-(n%6>1)
    sieve = [True] * int(n/3)
    for i in range(1,int(n**0.5)/3+1):
      if sieve[i]:
        k=3*i+1|1
        sieve[      k*k/3      ::2*k] = [False] * ((n/6-k*k/6-1)/k+1)
        sieve[k*(k-2*(i&1)+4)/3::2*k] = [False] * ((n/6-k*(k-2*(i&1)+4)/6-1)/k+1)
    return [2,3] + [3*i+1|1 for i in range(1,n/3-correction) if sieve[i]]

def prime_sieve(n):
    # Sieve of Eratosthenes
    result = [True] * (n + 1)
    result[0] = result[1] = False
    for i in range(int(n**0.5 + 1)):
        if result[i]:
            for j in range(i * i, len(result), i):
                result[j] = False
    return result

LIMIT = 100000000

primes = prime_sieve(LIMIT + 1)
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
