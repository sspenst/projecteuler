import re

with open("Files/p081_matrix.txt") as file:
	data = re.split(r"[\n]", file.read())
	for i in xrange(80):
		data[i] = re.split(r"[,]", data[i])
	for i in xrange(80):
		for j in xrange(80):
			data[i][j] = int(data[i][j])
	for i in xrange(1,80):
		data[0][i] += data[0][i-1]
		data[i][0] += data[i-1][0]
	for j in xrange(1,80):
		for i in xrange(1,80):
			if (data[i-1][j] > data[i][j-1]):
				data[i][j] += data[i][j-1]
			else:
				data[i][j] += data[i-1][j]
	print data[79][79]