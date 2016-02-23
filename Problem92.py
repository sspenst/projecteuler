count = 0
values = [None] * 10000000
values[1] = 1
values[89] = 2

for n in xrange(1, 10000000):
	if n % 1000000 == 0:
		print n
	
	temp = n
	
	while temp != 89 and temp != 1:
		if values[temp] == 2:
			temp = 89
			break
		elif values[temp] == 1:
			temp = 1
			break
		temp = sum(int(i) ** 2 for i in str(temp))
	
	if temp == 89:
		values[n] = 2
	else:
		values[n] = 1
		

for n in xrange(10000000):
	if values[n] == 2:
		count += 1

print count