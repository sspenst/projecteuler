nums = set(['0', '1', '2', '3', '4', '5', '6', '7', '8', '9'])
pans = nums

for x in range(9):
	pans = set(a + b for a in pans for b in nums if b not in a)

pans = list(pans)
sum = 0

for x in pans:
	if int(x[1:4]) % 2 == 0 and int(x[2:5]) % 3 == 0 and int(x[3:6]) % 5 == 0 and int(x[4:7]) % 7 == 0 and int(x[5:8]) % 11 == 0 and int(x[6:9]) % 13 == 0 and int(x[7:10]) % 17 == 0:
		sum += int(x)
		
print sum