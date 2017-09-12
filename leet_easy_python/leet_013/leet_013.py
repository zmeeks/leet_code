class Solution(object):
    
    def romanToInt(self, s):
        switch = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
        l = len(s) - 1
        sz = l
        total = switch.get(s[l])
        prev = total
        l-=1
        while l>=0:
            cur = switch.get(s[l])
            if cur >= prev:
                total += cur
            else:
                total -= cur
            prev = cur
            l-=1
        return total
        
        """
        :type s: str
        :rtype: int
        """
        