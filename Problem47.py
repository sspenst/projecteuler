def factors(num):
	primes = 0
	i = 2
	
	while i <= num:
		if num % i == 0:
			primes += 1
			while num % i == 0:
				num /= i
		i += 1
	
	return primes

row = 0

for n in range (2, 1000000):
	if factors(n) == 4:
		row += 1
		if row == 4:
			print n - 3
			break
	else:
		row = 0