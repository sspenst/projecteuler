def digsum(num):
	num = str(num)
	sum = 0
	for n in xrange(len(num)):
		sum += int(num[n])
	return sum

max = 0

for a in xrange(1, 100):
	for b in xrange(1, 100):
		if digsum(a ** b) > max:
			max = digsum(a ** b)

print max