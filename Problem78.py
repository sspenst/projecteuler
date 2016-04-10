import sys

def part(n):
	if n < 0:
		return 0
	if P_n[n] != 0:
		return P_n[n]
	total = 0
	for k in xrange(1,n + 1):
		temp = part(n - k*(3*k-1)/2) + part(n - k*(3*k+1)/2)
		if k % 2 == 0:
			total -= temp
		else:
			total += temp
	P_n[n] = total
	return P_n[n]

P_n = [0] * (1000001)
P_n[0] = 1

for num in xrange(1000000):
	if num % 1000 == 0:
		print num
	part(num)
	if P_n[num] % 1000000 == 0:
		print "%d - %d" % (num, P_n[num])
		sys.exit(0)