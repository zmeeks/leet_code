class Solution(object):
    def minMoves(self, nums):
        base = min(x for x in nums)
        return sum(nums) - len(nums)*base
        
        """
        :type nums: List[int]
        :rtype: int
        """