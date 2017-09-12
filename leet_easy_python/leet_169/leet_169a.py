class Solution(object):
    def majorityElement(self, nums):
        dic = {}
        sz = len(nums)//2
        for n in nums:
            if n in dic: dic[n] += 1
            else: dic[n] = 1
        for key in dic:
            if dic[key] > sz: return key
            
        """
        :type nums: List[int]
        :rtype: int
        """
        