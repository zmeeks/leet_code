class Solution(object):
    def getRow(self, rowIndex):
        cur = [1]
        for i in range(0,rowIndex):
            bla = []
            mir = cur[:]
            mir=mir+[0]
            cur=[0]+cur
            for a,b in zip(mir, cur): 
                bla.append(a+b)
            cur = bla
        return cur
        
        """
        :type rowIndex: int
        :rtype: List[int]
        """