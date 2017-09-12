class Solution(object):
    def repeatedSubstringPattern(self, s):
        stk = []
        a0 = s[0]
        sz_s = len(s)
        for i in range(1,sz_s//2+1):
            if s[i] == a0 and sz_s%i==0:  stk.append(i)
        while stk:
            j = stk.pop()
            i = 0
            while j<sz_s and s[j] == s[i]:
                i+=1
                j+=1
            if j == sz_s: return True
        return False
            
        """
        :type s: str
        :rtype: bool
        """

        #not using the Queue library ==> faster sol