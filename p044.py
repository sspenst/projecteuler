import sys

def ispent(a):
	n = ((0.25 + 6 * a) ** 0.5) / 3 + 1 / 6.0
	if int(n) == n:
		return True
	return False

pent = [1, 5]

for k in range(2, 1000000):
	pent.append((k + 1) * (3 * (k + 1) - 1) / 2)
	for j in range(1, k):
		if ispent(pent[j] + pent[k]) and ispent(pent[k] - pent[j]):
			print pent[k] - pent[j]
			sys.exit(0)