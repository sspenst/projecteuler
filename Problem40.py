def d_n(n):
	num = 0
	count = 0
	
	while count < n:
		num += 1
		count += len(str(num))
	
	return int(str(num)[len(str(num)) - 1 - (count - n)])

print d_n(1)*d_n(10)*d_n(100)*d_n(1000)*d_n(10000)*d_n(100000)*d_n(1000000)