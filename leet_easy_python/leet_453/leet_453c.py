class Solution(object):
    def minMoves(self, nums):
        return sum(nums) - len(nums)*min(x for x in nums)
        """
        :type nums: List[int]
        :rtype: int
        """