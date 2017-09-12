class Solution(object):
    def majorityElement(self, nums):
        cnt, ind, sz_n = 1, 0, len(nums)
        for i in xrange(1,sz_n):
            if nums[ind] == nums[i]: cnt+=1
            elif cnt==1: ind = i
            else: cnt-=1
        return nums[ind]
        
        """
        :type nums: List[int]
        :rtype: int
        """