class Solution(object):
    def twoSum(self, numbers, target):
        sz_n = len(numbers)
        for i in range(0, sz_n):
            targ, l, r = target - numbers[i], i+1, sz_n - 1
            m = (l+r)//2 
            while l<=r:
                if numbers[m] == targ: return [i+1, m+1]
                elif numbers[m] < targ: 
                    l = m+1 
                    m = (l+r)//2
                else: 
                    r = m-1
                    m = (l+r)//2
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """

        # python binary search sol much slower than python two-pointer sol