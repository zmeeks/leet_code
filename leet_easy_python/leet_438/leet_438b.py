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
        sz_s = len(s)
        sz_p = len(p)
        flag = 0
        for i in range(0,sz_s - sz_p + 1):
            if s[i] in dic:
                ref_chk = 0
                for j in range(i, i+ sz_p):
                    if s[j] in dic:
                        ref_chk += ord(s[j])*37
                        pass
                    else:
                        break
                    flag = j
                if flag == i + sz_p - 1 and ref_chk == chk_sum: res.append(i)
        return res        
        
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """

        #time limit still exceeded