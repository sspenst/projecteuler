num = 1
den = 1
count = 0

for n in xrange(1000):
	temp = num + den
	num = den + temp
	den = temp
	if len(str(num)) > len(str(den)):
		count += 1

print count