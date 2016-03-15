import sys

cubes = []
length = 1
j = 1

for i in xrange(1,1000000):
	if len(str(i ** 3)) > length:
		for cube in cubes:
			if cubes.count(cube) == 5:
				print j ** 3
				sys.exit(0)
			j += 1
		length += 1
		cubes = []
		j = i
	cubes.append(''.join(sorted(str(i ** 3))))