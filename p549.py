def s(n):
	total = 2
	m = 2
	while (total % n != 0):
		m += 1
		total *= m
	return m
		

for i in xrange(1, 100):
	print i, "\t", s(i)