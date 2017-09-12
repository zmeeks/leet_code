class Solution(object):
    def getRow(self, rowIndex):
        cur = [1]
        for i in range(0,rowIndex):
            new_cur = []
            for a,b in zip([0]+cur, cur+[0]): new_cur.append(a+b)
            cur = new_cur
        return cur
        
        """
        :type rowIndex: int
        :rtype: List[int]
        """