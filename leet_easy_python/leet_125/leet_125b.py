class Solution(object):
    def isPalindrome(self, s):
        s = filter(lambda x: x.isalnum(), s)
        s = s.lower()
        return s == s[::-1]
        
        """
        :type s: str
        :rtype: bool
        """
        