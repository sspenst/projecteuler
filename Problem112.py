def bouncy(temp):
	num = str(temp)
	length = len(num)
	if length < 3:
		return 0
	for i in xrange(length-1):
		if int(num[i]) > int(num[i+1]):
			break
		if i == (length - 2):
			return 0
	for i in xrange(length-1):
		if int(num[i]) < int(num[i+1]):
			break
		if i == (length - 2):
			return 0
	return 1

n = 1
bounce = 0

while(1):
	if bouncy(n):
		bounce += 1
	if (bounce+0.0)/n > 0.99:
		break
	n += 1

print n-1