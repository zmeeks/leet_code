class Solution(object):
    def searchInsert(self, nums, target):
        sz = len(nums)
        for i in range(0,sz): 
            if target <= nums[i]: return i
        return sz
        
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """