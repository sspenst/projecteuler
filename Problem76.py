total = 0
nums = [100]
max = 100

while nums[0] != 1:
	if total % 100000 == 0:
		print total
	t_ind = len(nums) - 1
	while nums[t_ind] == 1:
		del nums[-1]
		t_ind -= 1
	t_sum = max - (sum(nums) - nums[t_ind])
	nums[t_ind] -= 1
	for i in xrange(t_sum/nums[t_ind] - 1):
		nums.append(nums[t_ind])
	for i in xrange(nums[t_ind] - 1, 0, -1):
		for j in xrange((max - sum(nums))/i):
			nums.append(i)
	total += 1

print total