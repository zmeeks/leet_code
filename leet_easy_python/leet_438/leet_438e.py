class Solution(object):
    def findAnagrams(self, s, p):
        dic = {}
        res = []
        chk_sum = 0
        for c in p:
            if c in dic:
                chk_sum += ord(c)*37
            else:
                dic[c]=1
                chk_sum += ord(c)*37
        i, sz_s, sz_p = 0, len(s), len(p)
        while i < sz_s - sz_p + 1:
            if s[i] in dic:
                ref_chk = 0
                j = i
                while j < sz_s:
                    if s[j] in dic:
                        ref_chk += ord(s[j])*37
                    else:
                        if s[j] not in dic: i = j
                        break
                    if j == i + sz_p - 1: 
                        if ref_chk == chk_sum: res.append(i)   
                        ref_chk -= ord(s[i])*37
                        i+=1
                    j+=1
            i+=1        
        return res        
        
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """

        # fastest solution yet -- this just a corrected version of second solution