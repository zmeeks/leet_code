class Solution(object):
    def trailingZeroes(self, n):
        k=1
        total = 0
        while (k*5)<=n: 
            k*=5
            total+=n//k
        return total 
        
        """
        :type n: int
        :rtype: int
        """
        