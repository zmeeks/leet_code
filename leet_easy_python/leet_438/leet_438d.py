class Solution(object):
    def findAnagrams(self, s, p):
        dic = {}
        res = []
        for c in p:
            if c in dic:
                dic[c]+=1
            else:
                dic[c]=1
        i, sz_s, sz_p = 0, len(s), len(p)
        while i < sz_s - sz_p + 1:
            if s[i] in dic:
                tmp_dic = dic.copy()
                j = i
                while j < sz_s:
                    if s[j] in tmp_dic and tmp_dic[s[j]]>0:
                        tmp_dic[s[j]]-=1
                    else:
                        if s[j] not in tmp_dic: i = j
                        break
                    if j == i + sz_p - 1: 
                        res.append(i)
                        tmp_dic[s[i]]+=1
                        i+=1
                    j+=1
            i+=1
        return res        
        
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """

# optimized version of first solution -- this time beats 99+% of all python solutions