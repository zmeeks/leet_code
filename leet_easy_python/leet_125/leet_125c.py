class Solution(object):
    def isPalindrome(self, s):
        i, j = 0, len(s)-1
        s=s.lower()
        while i < j:
            if not s[i].isalnum() or not s[j].isalnum():
                if not s[i].isalnum(): i+=1
                if not s[j].isalnum(): j-=1
            else:
                if s[i]== s[j]:
                    i+=1
                    j-=1
                else:
                    return False
        return True
        
        """
        :type s: str
        :rtype: bool
        """