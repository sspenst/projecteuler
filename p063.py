count = 0

for b in xrange(1, 101):
	for a in xrange(1, 101):
		num = len(str(a ** b))
		if num == b:
			print "%d^%d" % (a, b)
			count += 1
		elif num > b:
			break

print count