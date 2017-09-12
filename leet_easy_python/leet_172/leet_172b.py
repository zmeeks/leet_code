class Solution(object):
    def trailingZeroes(self, n):
        total = 0
        while n>0: 
            total+=n//5
            n//=5
        return total 
        
        """
        :type n: int
        :rtype: int
        """
        