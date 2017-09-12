class Solution(object):
    def findDisappearedNumbers(self, nums):
        j, x, sz_n0 = 0, 1, len(nums)
        nums = sorted(set(nums))
        sz_n1 = len(nums) 
        res = []
        while x <= sz_n0:
            if j>= sz_n1:
                res.append(x) 
                j+=1
            elif nums[j] == x: j+=1
            else: res.append(x)
            x+=1
        return res
            
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        