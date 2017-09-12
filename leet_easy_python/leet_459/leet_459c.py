class Solution(object):
    def repeatedSubstringPattern(self, s):
        a0 = s[0]
        sz_s = len(s)
        for i in range(1,sz_s//2+1):
            if s[i] == a0 and sz_s%i==0:  
                j = 0
                k = i
                while k<sz_s and s[j] == s[k]:
                    k+=1
                    j+=1
                if k == sz_s: return True
        return False
            
        """
        :type s: str
        :rtype: bool
        """