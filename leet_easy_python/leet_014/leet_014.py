class Solution(object):
    def longestCommonPrefix(self, strs):
        i = 0
        if len(strs) == 0: return ""     
        while True:
            if len(strs[0]) == i: return strs[0][:i]        
            chk = strs[0][i]
            for s in strs:
                if i == len(s): return s[:i] 
                if s[i] != chk: return s[:i]    
            i+=1
                     
        """
        :type strs: List[str]
        :rtype: str
        """
        