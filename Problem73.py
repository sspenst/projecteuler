import math
import fractions

total = 0

for b in xrange(5, 12001):
	for a in xrange(b/3 + 1, (b-1)/2 + 1):
		if fractions.gcd(a, b) == 1:
			total += 1
			
print total