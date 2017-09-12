try:
    import Queue as Q  # ver. < 3.0
except ImportError:
    import queue as Q

class Solution(object):
    def findContentChildren(self, g, s):
        pq_s = Q.PriorityQueue()
        pq_g = Q.PriorityQueue()
        cnt = 0
        for x in s: pq_s.put(-x)
        for x in g: pq_g.put(-x)
        while not pq_s.empty() and not pq_g.empty():
            tmp_s = pq_s.queue[0]
            if tmp_s <= pq_g.get(): 
                cnt+=1
                pq_s.get()
        return cnt
        
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        