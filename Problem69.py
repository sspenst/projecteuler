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
	if a == 1:
		return 1
	for prime in primes:
		if prime > (a ** 0.5):
			break
		if a % prime == 0 and b % prime == 0:
			return 0
	if b % a == 0:
		return 0
	return 1

max = 0.0
max_n = 0

for n in xrange(1,2):
	temp = n * 30030
	if n % 10 == 0:
		print n
	phi = 0
	for i in xrange(1,temp):
		if HCF(i,temp) == 1:
			phi += 1
	if (temp + 0.0)/phi > max:
		max = (temp + 0.0)/phi
		max_n = temp
		print "%d - %f" % (max_n, max)
		
'''
after trying some values i realized the best ratios were:
2 - 2              (2)
6 - 3              (2*3)
30 - 3.75          (2*3*5)
210 - 4.375        (2*3*5*7)
2310 - 4.8125      (2*3*5*7*11)
30030 - 5.213542   (2*3*5*7*11*13)
510510 - 5.539388  (2*3*5*7*11*13*17)
each new best ratio is the previous n multiplied by the next prime
'''