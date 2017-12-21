import sys

def isprime(num):
	if num > 2:
		for i in range(2, int(num ** 0.5) + 1):
			if num % i == 0:
				return False
		return True
	return False

primes = []
comps = []

for n in range(10001):
	if isprime(n):
		primes.append(n)
	elif n % 2 == 1 and n > 1:
		comps.append(n)
		
squars = [2 * n * n for n in range(1, 101)]

for comp in comps:
	i = 0
	j = 0
	while 1:
		if primes[i] + squars[j] < comp:
			j += 1
		elif primes[i] + squars[j] > comp:
			if j > 0:
				j = 0
				i += 1
			else:
				print comp
				sys.exit(0)
		else:
			break