import itertools

sieve = [1] * 1000001

for i in xrange(2, 1000001):
	if sieve[i] == 1:
		for j in xrange(2, 1000000/i + 1):
			sieve[i*j] = 0

replaces = [''.join(num) for num in list(itertools.product('01', repeat=6)) if int(''.join(num)) % 3 == 0]
del replaces[0]
del replaces[-1]

for replace in replaces:
	for num in list(itertools.product('0123456789', repeat=3)):
		temp = ''
		i = 0
		for c in replace:
			if c == '0':
				temp += num[i]
				i += 1
			else:
				temp += '0'
		temp = int(temp)
		count = 0
		for j in xrange(10):
			if sieve[temp] == 1:
				count += 1
			temp += int(replace)
		if count == 8:
			print "%d %d" % (int(replace), temp - 10*int(replace))