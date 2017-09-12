class Solution(object):
    def singleNumber(self, nums):
        return reduce(lambda x,y: x^y, nums)
        
        """
        :type nums: List[int]
        :rtype: int
        """
        