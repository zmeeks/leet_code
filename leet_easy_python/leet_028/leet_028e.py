class Solution(object):
    def strStr(self, haystack, needle):
        if not needle: return 0
        if not haystack: return -1
        sz = len(haystack)
        sz_n = len(needle)
        for i in range(0,sz-sz_n+1):
            if haystack[i:i+sz_n] == needle: return i
        return -1
        
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """