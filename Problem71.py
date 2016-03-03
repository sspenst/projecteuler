sieve = [1] * 428573
primes = []

for i in xrange(2, 428573):
	if sieve[i] == 1:
		for j in xrange(2, 428572/i + 1):
			sieve[i*j] = 0

for i in xrange(2, 428573):
	if sieve[i] == 1:
		primes.append(i)

def HCF(a, b):
	for prime in primes:
		if prime > (a ** 0.5):
			return 1
		if a % prime == 0 and b % prime == 0:
			return 0
	if b % a == 0:
		return 0

frac = []

max_a = 1
max_b = 8

for b in xrange(8, 1000001):
	for a in xrange(b*max_a/max_b + 1, b*3/7 + 1):
		if HCF(a, b) == 1 and (a + 0.0)/b != 3.0/7:
			max_a = a
			max_b = b
			
print "%d/%d" % (max_a, max_b)