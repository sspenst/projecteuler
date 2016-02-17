triples = []

for a in range (1, int(1000/3)):
	for b in range(a + 1, int((1000 - a)/2)):
		for c in range(b + 1, 1000 - a - b):
			if (a ** 2 + b ** 2) ** 0.5 == c:
				triples.append(a + b + c)
				
print max(set(triples), key=triples.count)