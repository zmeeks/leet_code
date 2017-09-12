class Solution(object):
    def titleToNumber(self, s):
        res = 0
        sz = len(s)
        for pos in range(0, sz):
            res = res*26 + ord(s[pos]) - ord('A') + 1
        return res
        
        """
        :type s: str
        :rtype: int
        """
        