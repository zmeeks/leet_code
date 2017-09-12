class Solution(object):
    def climbStairs(self, n):
        if n < 3: return n
        a = 1
        b = 2
        for i in range(2,n):
            b += a
            a = b - a
        return b
        
        """
        :type n: int
        :rtype: int
        """