"""
function twoSum(nums, target)
	n = length of num
	for i from 0 to n-1:
		for j from (i +1) to (n-1):
			if nums[i] + nums[j] == target:
				return [i, j]
			else:
				j++
	return "no solution"
"""

class Solution(object):
	def twoSum(self, nums, target):
		n = len(nums)
		for i in range(n);
			for j in range(i+1, n):
				if nums[i] + nums[j] == target:
					return [i, j]
		return "no solution"


		