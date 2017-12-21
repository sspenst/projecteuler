'''
quadrants are:
0 - north
1 - west
2 - south
3 - east
'''

import re

def twoptquads(x1, y1, x2, y2):
	quadrants = [0] * 4

	if ((y2 >= 0 and y1 <= 0) or (y2 <= 0 and y1 >= 0)):
		x = ((x2 - x1)*(abs(y1)+0.0) + x1*abs(y1 - y2))/abs(y1 - y2)
		if x > 0:
			quadrants[3] = 1
		elif x < 0:
			quadrants[1] = 1
	
	if ((x1 >= 0 and x2 <= 0) or (x1 <= 0 and x2 >= 0)):
		y = ((y2 - y1)*(abs(x1)+0.0) + y1*abs(x1 - x2))/abs(x1 - x2)
		if y > 0:
			quadrants[0] = 1
		elif y < 0:
			quadrants[2] = 1
			
	return quadrants

def hasorigin(nums, index):
	for i in xrange(6):
		nums[i] = int(nums[i])
	temp1 = twoptquads(nums[0], nums[1], nums[2], nums[3])
	temp2 = twoptquads(nums[0], nums[1], nums[4], nums[5])
	temp3 = twoptquads(nums[2], nums[3], nums[4], nums[5])
	for i in xrange(4):
		if (temp1[i] + temp2[i] + temp3[i]) == 0:
			return 0
	return 1

with open("files/p102_triangles.txt") as file:
	data = re.split(r"[\n]", file.read())
	total = 0
	for i in xrange(1000):
		data[i] = re.split(r"[,]", data[i])
		if(hasorigin(data[i], i)):
			total += 1
	print total
