def isprime(num):
	if num > 2:
		for i in range(2, int(num ** 0.5) + 1):
			if num % i == 0:
				return False
		return True
	return False

primes = []

for n in xrange(1000, 10000):
	if isprime(n):
		primes.append(n)

for i in xrange(0, len(primes) - 2):
	for j in xrange(i + 1, len(primes) - 1):
		if sorted(str(primes[i])) == sorted(str(primes[j])):
			diff = primes[j] - primes[i]
			for k in xrange(j + 1, len(primes)):
				if sorted(str(primes[i])) == sorted(str(primes[k])) and primes[k] - primes[j] == diff:
					print "%d %d %d" % (primes[i], primes[j], primes[k])