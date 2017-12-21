n = 1
while 1:
	h = n * (2 * n - 1)
	p = ((0.25 + 6 * h) ** 0.5) / 3 + 1 / 6.0
	if int(p) == p:
		print h
	n += 1