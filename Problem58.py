def isprime(num):
	if num > 1:
		for i in range(2, int(num ** 0.5) + 1):
			if num % i == 0:
				return False
		return True
	return False

primes = 8
diags = 13
num = 49
length = 7

while float(primes) / float(diags) >= 0.1:
	for n in xrange(3):
		num += length + 1
		if isprime(num):
			primes += 1
	num += length + 1
	length += 2
	diags += 4

print length