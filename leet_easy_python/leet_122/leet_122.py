class Solution(object):
    def maxProfit(self, prices):
        prev_min = float('inf')
        total = 0
        for p in prices:
            if p < prev_min: prev_min = p
            if p > prev_min: 
                total += p - prev_min
                prev_min = p
        return total
        
        """
        :type prices: List[int]
        :rtype: int
        """
        
