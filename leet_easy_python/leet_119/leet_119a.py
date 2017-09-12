class Solution(object):
    def getRow(self, rowIndex):
        cur = [1]
        for i in range(0,rowIndex):
            cur.insert(0,1)
            sz = len(cur)
            for j in range(1, sz-1): cur[j] += cur[j+1]
        return cur
        
        """
        :type rowIndex: int
        :rtype: List[int]
        """