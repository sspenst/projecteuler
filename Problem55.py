def ispal(num):
	if int(str(num)[::-1]) == num:
		return True
	return False

def add(num):
	return num + int(str(num)[::-1])

lychel = 0

for i in xrange(1, 10000):
	num = add(i)
	count = 1
	while ispal(num) is False and count < 50:
		num = add(num)
		count += 1
	if count == 50:
		lychel += 1

print lychel