import re
import math

with open("Files/p099_base_exp.txt") as file:
	data = re.split(r"[\n]", file.read())
	max_b = 0
	max_e = 0
	max_i = 0
	for i in xrange(1000):
		data[i] = re.split(r"[,]", data[i])
		if i == 0:
			max_b = int(data[i][0])
			max_e = int(data[i][1])
		else:
			if math.log10(max_b) / math.log10(int(data[i][0])) * max_e < int(data[i][1]):
				max_b = int(data[i][0])
				max_e = int(data[i][1])
				max_i = i
	print max_i + 1