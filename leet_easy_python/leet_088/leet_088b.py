class Solution(object):
    def merge(self, nums1, m, nums2, n):
        self.n1 = nums1
        self.n2 = nums2
        self.mhf(m-1,n-1,m+n-1)
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: void Do not return anything, modify nums1 in-place instead.
        """
            
    def mhf(self, m, n, pos): # mhf = merge helper function
        if n<0: return
        if m<0 or self.n1[m] < self.n2[n]: 
            self.n1[pos] = self.n2[n]
            self.mhf(m,n-1,pos-1)
        else:
            self.n1[pos] = self.n1[m]
            self.mhf(m-1,n,pos-1)    
        """
        :type m: int
        :type n: int
        :type pos: int
        :rtype: void, this func modifies nums1 and nums2 in-place
        """
        
        