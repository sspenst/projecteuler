def squares(x,y):
	total = 0
	for i in xrange(x):
		for j in xrange(y):
			total += (x-i)*(y-j)
	return total

min = 2000000
area = 0

a = 1

while(1):
	b = a
	while(1):
		curr = squares(a,b)
		if abs(2000000 - curr) < min:
			min = abs(2000000 - curr)
			area = a*b
		if curr > 2000000:
			break
		b += 1
	if b == a:
		break
	a += 1
		
print area