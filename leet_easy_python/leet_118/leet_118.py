class Solution(object):
    def generate(self, numRows):
        ret = []
        if numRows == 0: return ret
        ret.append([1])
        for i in range(1,numRows):
            cur = ret[-1]
            res = [1]
            sz = len(cur)-1
            for i in range(0,sz): res.append(cur[i]+cur[i+1])
            res.append(1)
            ret.append(res)
        return ret
            
        """
        :type numRows: int
        :rtype: List[List[int]]
        """