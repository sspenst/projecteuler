def isprime(num):
	if num > 1:
		for i in range(2, int(num ** 0.5) + 1):
			if num % i == 0:
				return False
		return True
	return False

nums = set()
collect = set()

for n in range(1, 8):
	nums.add(str(n))
	temp = set([''])
	for x in range(1, n + 1):
		temp = set(a + b for a in temp for b in nums if b not in a and len(a + b) <= n)
		if x == n:
			collect |= temp

intlist = map(int, list(collect))

while isprime(max(intlist)) is False:
	intlist.remove(max(intlist))

print max(intlist)