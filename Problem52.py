import sys

i = 0

while 1:
	for n in xrange(10 ** i, int(10 ** (i + 1) / 6) + 1):
		if sorted(str(n)) == sorted(str(2*n)):
			if sorted(str(2*n)) == sorted(str(3*n)):
				if sorted(str(3*n)) == sorted(str(4*n)):
					if sorted(str(4*n)) == sorted(str(5*n)):
						if sorted(str(5*n)) == sorted(str(6*n)):
							print n
							sys.exit(0)
	i += 1