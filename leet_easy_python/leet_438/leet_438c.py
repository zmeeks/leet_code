class Solution(object):
    def findAnagrams(self, s, p):
        vec = [-1]*26
        res = []
        for c in p: 
            if vec[ord(c) - ord("a")] == -1: vec[ord(c) - ord("a")] = 1
            else: vec[ord(c) - ord("a")]+=1
        i, sz_s, sz_p = 0, len(s), len(p)
        while i < sz_s - sz_p + 1:
            if vec[ord(s[i]) - ord("a")] > 0:
                tmp_vec = vec[:]
                j = i
                while j < sz_s:
                    if tmp_vec[ord(s[j]) - ord("a")] > 0: tmp_vec[ord(s[j]) - ord("a")]-=1
                    else:
                        if tmp_vec[ord(s[j]) - ord("a")] == -1: i = j
                        break
                    if j == i + sz_p - 1: 
                        res.append(i)
                        tmp_vec[ord(s[i]) - ord("a")] +=1
                        i+=1
                    j+=1
            i+=1        
        return res        
        
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """

        # beats 99% of other python solutions