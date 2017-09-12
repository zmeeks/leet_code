class Solution(object):
    def strStr(self, haystack, needle):
        if not needle: return 0
        if not haystack: return -1
        sz = len(haystack)
        sz_n = len(needle)
        for i in range(0,sz-sz_n+1):
            j = i
            k=0
            while k<sz_n and j<sz and needle[k] == haystack[j]:
                k+=1
                j+=1
            if k==sz_n: return i
        return -1
        
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """