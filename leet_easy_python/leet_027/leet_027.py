class Solution(object):
    def removeElement(self, nums, val):
        sz = len(nums)
        j = 0
        for i in range(0,sz):
            if nums[i]!=val:
                nums[j] = nums[i]
                j+=1
        return j
        
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        