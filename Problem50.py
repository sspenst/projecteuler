def isprime(num):
	if num > 1:
		for i in range(2, int(num ** 0.5) + 1):
			if num % i == 0:
				return False
		return True
	return False

primes = []

for n in xrange(2, 10000):
	if isprime(n):
		primes.append(n)

max = 0

for i in xrange(0, len(primes)):
	sum = 0
	for n in xrange(i, len(primes)):
		if isprime(sum) and n - i > max:
			max = n - i
			print "%d - %d" % (max, sum)
		if sum + primes[n] > 1000000:
			break
		sum += primes[n]