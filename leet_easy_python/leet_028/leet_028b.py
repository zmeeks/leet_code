class Solution(object):
    def strStr(self, haystack, needle):
        if not needle: return 0
        if not haystack: return -1
        sz = len(haystack)
        sz_n = len(needle)
        mat = [0]*sz_n
        for i in range(0,sz_n):
            mat[i]= [0]*sz
        for i in range(0,sz):
            if haystack[i] == needle[0]: 
                mat[0][i] = 1
                if sz_n == 1: return i
        for j in range(1,sz_n):
            for i in range(j,sz):
                if haystack[i] == needle[j]: 
                    mat[j][i] = mat[j-1][i-1]+1
                    if mat[j][i] == sz_n: return i - sz_n + 1
        return -1
        
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """

        #this python solution exceeds memory constraint (implicityly passes time constraint)