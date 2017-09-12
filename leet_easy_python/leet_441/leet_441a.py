class Solution(object):
    def arrangeCoins(self, n):
        stairs = 0
        while n >= 0:
            stairs += 1
            n-= stairs
        return stairs - 1
        
        """
        :type n: int
        :rtype: int
        """
        