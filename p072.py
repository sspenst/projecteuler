MAX = 1000001

phi = []

for i in xrange(MAX):
	phi.append(i)
	
for p in xrange(2, MAX):
	if phi[p] == p:
		for n in xrange(p, MAX, p):
			phi[n] = phi[n] * (p - 1) / p
			
print sum(phi) - 1