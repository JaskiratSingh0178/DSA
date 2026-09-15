class Solution(object):
    def transformArray(self, nums):
        zeros = 0
        for i in range(len(nums)):
            if nums[i] % 2 == 0:
                zeros += 1
        for i in range(zeros):
            nums[i] = 0
        for i in range(zeros, len(nums)):
            nums[i] = 1
        return nums