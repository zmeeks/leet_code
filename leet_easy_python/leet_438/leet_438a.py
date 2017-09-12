class Solution(object):
    def findAnagrams(self, s, p):
        dic = {}
        res = []
        for c in p:
            if c in dic:
                dic[c]+=1
            else:
                dic[c]=1
        sz_s = len(s)
        sz_p = len(p)
        flag = 0
        for i in range(0,sz_s - sz_p + 1):
            if s[i] in dic:
                tmp_dic = dic.copy()
                for j in range(i, i+ sz_p):
                    if s[j] in tmp_dic and tmp_dic[s[j]]>0:
                        tmp_dic[s[j]]-=1
                    else:
                        break
                    flag = j
                if flag == i + sz_p - 1: res.append(i)
        return res        
        
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """

        #correct solution -- however timelimit exceeded