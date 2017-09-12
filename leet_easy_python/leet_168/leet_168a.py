class Solution(object):
    def convertToTitle(self, n):
        res = ""
        while n>26:
            n-=1
            tmp = n%26
            res = chr(tmp + ord('A')) + res
            n //= 26
        res = chr(n - 1 + ord('A')) + res
        return res
        
        """
        :type n: int
        :rtype: str
        """
        