class Solution(object):
    def findDisappearedNumbers(self, nums):
        sz_p = len(nums) 
        res = []
        for x in nums: nums[abs(x)-1] = -abs(nums[abs(x)-1])
        for i in range(0,sz_p):
            if nums[i] > 0: res.append(i+1)
        return res
        """
        :type nums: List[int]
        :rtype: List[int]
        """