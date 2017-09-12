class Solution(object):
    def lengthOfLastWord(self, s):
        if not s: return 0
        j = len(s) - 1
        cnt = 0
        while j>=0 and s[j] == ' ': j-=1
        while j>=0 and s[j] != ' ': 
            j-=1
            cnt+=1
        return cnt
        
        """
        :type s: str
        :rtype: int
        """