class Solution:
    def twoSum(self, nums, target):
        dic = dict()
        res = []
        for x in range (0, len(nums)):
            if target - nums[x] in dic:
                res.append(dic[target - nums[x]])
                res.append(x)
                return res
            else:
                dic[nums[x]] = x
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        