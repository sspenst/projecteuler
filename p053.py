import math

def nCr(n, r):
	return math.factorial(n) / (math.factorial(r) * math.factorial(n - r))

count = 0

for n in xrange(23, 101):
	for r in xrange(0, n + 1):
		if nCr(n, r) > 1000000:
			count += 1

print count