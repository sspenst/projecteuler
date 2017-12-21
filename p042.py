def stringtoint(string):
	sum = 0
	for n in range(1, len(string) - 1):
		sum += ord(string[n]) - 64
	return sum
	
def istrinum(num):
    n = 1
    while 1:
		if n * (n + 1) / 2 == num:
			return True
		elif n * (n + 1) / 2 > num:
			return False
		n += 1

import re

with open("Files/p042_words.txt") as file:
	total = 0
	data = re.split(r"[,]", file.read())
	for word in data:
		if istrinum(stringtoint(word)):
			total += 1

print total