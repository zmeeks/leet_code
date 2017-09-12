class Solution(object):
    def titleToNumber(self, s):
        if len(s) == 1: return ord(s) - ord("A") + 1
        else: return ord(s[-1]) - ord("A") + 1 + 26*self.titleToNumber(s[:-1])
        
        """
        :type s: str
        :rtype: int
        """
        