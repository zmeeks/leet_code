class Solution(object):
    def findContentChildren(self, g, s):
        g.sort()
        s.sort()
        cnt = 0
        j = 0
        sz_g = len(g)
        for x in s:
            if j == sz_g: break
            if g[j] <= x:
                cnt+=1
                j+=1       
        return cnt
        
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """

        #this sol faster than priority queue sols