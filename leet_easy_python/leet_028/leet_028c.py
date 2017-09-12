class Solution(object):
    def strStr(self, haystack, needle):
        if not needle: return 0
        if not haystack: return -1
        sz = len(haystack)
        sz_n = len(needle)
        for i in range(0,sz):
            left_h = i
            left_n = 0
            right_n = sz_n-1
            right_h = left_h + sz_n - 1
            if right_h >= sz: return -1
            while left_n <= right_n and needle[left_n] == haystack[left_h] and needle[right_n] == haystack[right_h]:
                left_h +=1
                left_n +=1
                right_h -=1
                right_n -=1
            if left_n > right_n: return i
        return -1
        
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """