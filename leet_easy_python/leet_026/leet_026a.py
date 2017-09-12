class Solution(object):
    def removeDuplicates(self, nums):
        sz = len(nums)
        if sz==0: return 0
        i = 1
        cnt = 0
        while i<sz:
            if nums[i] != nums[cnt]:
                cnt+=1
                nums[cnt] = nums[i]
            i+=1
        return cnt+1
        
        """
        :type nums: List[int]
        :rtype: int
        """
        