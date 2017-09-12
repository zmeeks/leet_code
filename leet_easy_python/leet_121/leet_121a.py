class Solution(object):
    def maxProfit(self, prices):
        sz = len(prices)
        if sz < 2: return 0
        prev = prices[0]
        mp = 0
        for i in range(1,sz):
            prev = min(prev, prices[i-1])
            mp = max(mp, prices[i] - prev)
        return mp
        
        """
        :type prices: List[int]
        :rtype: int
        """
        
        