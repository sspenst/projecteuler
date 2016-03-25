fact = [1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880]
nums = [-1] * 2540161
nums[169] = 3
nums[363601] = 3
nums[1454] = 3
nums[871] = 2
nums[45361] = 2
nums[872] = 2
nums[45362] = 2

def facsum(num):
	return sum(fact[int(c)] for c in str(num))

for i in xrange(1000000):
	temp = []
	i_t = i
	while(1):
		length = len(temp)
		if length > 0 and temp[length - 1] == i_t:
			for t in xrange(0, length):
				nums[temp[t]] = length - t
			break
		elif nums[i_t] != -1:
			old = nums[i_t]
			for t in xrange(0, length):
				nums[temp[t]] = length - t + old
			break
		else:
			temp.append(i_t)
			i_t = facsum(i_t)
	
total = 0
	
for i in xrange(1000000):
	if nums[i] == 60:
		total += 1
		
print total