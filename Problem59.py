import sys
import re

with open("Files/p059_cipher.txt") as file:
	data = re.split(r"[,]", file.read())
	for a in xrange(97, 123):
		for b in xrange(97, 123):
			for c in xrange(97, 123):
				letter = 0
				text = ""
				for num in data:
					if letter == 0:
						text += chr(a ^ int(num))
					elif letter == 1:
						text += chr(b ^ int(num))
					else:
						text += chr(c ^ int(num))
					
					if letter == 2:
						letter = 0
					else:
						letter += 1
				if " the " and " and " in text:
					sum = 0
					for item in text:
						sum += ord(item)
					print "Code: %d %d %d // %s %s %s\n\n%s\n\nSum of ASCII values: %d" % (a, b, c, chr(a), chr(b), chr(c), text, sum)
					sys.exit(0)