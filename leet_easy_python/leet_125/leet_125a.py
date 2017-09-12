class Solution(object):
    def isPalindrome(self, s):
        str = ""
        for c in s:
            if c.isalnum(): str+=c
        str = str.lower()
        return str == str[::-1]
        
        """
        :type s: str
        :rtype: bool
        """
        
        #note: time limit exceeded with this correct solution