class Solution(object):
    def maxSubArray(self, nums):
        prev = m = nums[0]
        sz = len(nums)
        for i in range(1,sz):
            prev = max(prev + nums[i], nums[i])
            m = max(m, prev)
        return m
        
        """
        :type nums: List[int]
        :rtype: int
        """