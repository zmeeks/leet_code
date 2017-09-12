class Solution(object):
    def merge(self, nums1, m, nums2, n):
        pos = m+n-1
        m = m-1
        n = n-1
        while pos >=0:
            if n<0: return
            if m<0 or nums1[m] < nums2[n]: 
                nums1[pos] = nums2[n]
                n-=1
            else:
                nums1[pos] = nums1[m]
                m-=1
            pos-=1    
            
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: void Do not return anything, modify nums1 in-place instead.
        """
        