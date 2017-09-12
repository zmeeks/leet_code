class Solution(object):
    def removeDuplicates(self, nums):
        if not nums: return 0
        sz = len(nums) 
        cnt = 0
        for i in range(1,sz):
            if nums[i] != nums[cnt]:
                cnt+=1
                nums[cnt] = nums[i]
        return cnt+1
        
        """
        :type nums: List[int]
        :rtype: int
        """