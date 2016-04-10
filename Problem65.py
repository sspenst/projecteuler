num = den = 1

for i in xrange(98, 0, -1):
	if i % 3 == 2: num, den = den, num + (i + 1)/3*2*den
	else: num, den = den, num + den

print sum(int(n) for n in str(2*den + num))