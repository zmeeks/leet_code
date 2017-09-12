class Solution(object):
    def findDisappearedNumbers(self, nums):
        nex = 0
        sz_n = len(nums)
        res = []
        for i in range(0,sz_n):
            if nums[i] == i+1 or nums[i] == 0:
                pass
            else:
                j = i
                tmp = 0
                while True:
                    if nums[j] == j+1:
                        break
                    elif nums[j] == 0:
                        nums[j] = tmp
                    else:
                        nex = nums[j]
                        nums[j] = tmp
                        j = nex - 1
                        tmp = nex
        for i in range(0,sz_n):
            if nums[i]==0:
                res.append(i+1)
        return res
        
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        