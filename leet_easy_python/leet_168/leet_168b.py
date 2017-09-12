class Solution(object):
    def convertToTitle(self, n):
        if n <=26: return chr(n + ord("A") - 1)
        else: return self.convertToTitle((n-1)//26 ) + chr((n-1)%26 + ord("A")) 
        
        """
        :type n: int
        :rtype: str
        """
        