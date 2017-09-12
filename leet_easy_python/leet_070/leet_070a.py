class Solution(object):
    def climbStairs(self, n):
        if n < 3: return n
        a = 1
        b = 2
        for i in range(2,n):
            tmp = a + b
            a = b
            b = tmp
        return b
        
        """
        :type n: int
        :rtype: int
        """