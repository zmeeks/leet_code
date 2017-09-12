class Solution(object):
    def countSegments(self, s):
        return len(s.split())
        """
        :type s: str
        :rtype: int
        """
        
        #note: for whatever reason this more succinct code ia not as fast as first solution (434a) in tested submissions