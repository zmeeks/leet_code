class Solution(object):
    
    def nC2(self, n):
        f = math.factorial
        return f(n) / f(2) / f(n-2)
    
    def numberOfBoomerangs(self, points):
        sz_p = len(points)
        cnt = 0
        for i in range(0, sz_p):
            p_i0 = points[i][0]
            p_i1 = points[i][1]
            dic = {}
            for j in range(0, sz_p):
                if j==i:
                    pass
                else:
                    dist = math.sqrt((p_i0 - points[j][0])**2 + (p_i1 - points[j][1])**2)
                    if dist in dic:
                        dic[dist]+=1
                    else:
                        dic[dist]=1
            for key in dic:
                if dic[key] > 1: cnt+= self.nC2(dic[key])
        return cnt*2
                    
        """
        :type points: List[List[int]]
        :rtype: int
        """