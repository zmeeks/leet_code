class Solution(object):
    def maxProfit(self, prices):
        prev = float('inf')
        mp = 0
        for price in prices:
            prev = min(prev, price)
            mp = max(mp, price - prev)
        return mp
        
        """
        :type prices: List[int]
        :rtype: int
        """
        