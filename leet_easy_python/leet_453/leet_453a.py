class Solution(object):
    def minMoves(self, nums):
        cnt = 0
        base = min(x for x in nums)
        for num in nums: cnt += num - base
        return cnt
        
        """
        :type nums: List[int]
        :rtype: int
        """
        