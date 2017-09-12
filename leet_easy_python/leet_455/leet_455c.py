import heapq as Q

class Solution(object):
    def findContentChildren(self, g, s):
        s = [-x for x in s]
        g = [-x for x in g]
        Q.heapify(s)
        Q.heapify(g)
        cnt = 0
        while s and g: 
            if s[0] <= Q.heappop(g):
                cnt+=1
                Q.heappop(s)
        return cnt
        
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        