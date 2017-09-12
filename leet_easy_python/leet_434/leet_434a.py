class Solution(object):
    def countSegments(self, s):
        strs = s.split(" ")
        cnt = 0
        for x in strs:
            if x == "" or x == " ": pass
            else: cnt+=1
        return cnt
        
        """
        :type s: str
        :rtype: int
        """
        