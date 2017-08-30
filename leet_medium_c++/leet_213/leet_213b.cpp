class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len == 0) return 0;
        if(len == 1) return nums[0];
        if(len == 2) return max(nums[0], nums[1]);
        if(len == 3) return max(nums[0], max(nums[2], nums[1]));
        vector<int> nums2 = nums;
        nums[2] += nums[0];
        nums2[3] += nums2[1];
        for(int i=3; i<len; i++)
            nums[i] += max(nums[i-2], nums[i-3]);
        for(int i=4; i<len; i++)
            nums2[i] += max(nums2[i-2], nums2[i-3]);
        nums2[0] += max(nums2[len-2], nums2[len-3]);  
        if(nums[len-1] <= nums[len-2]) return nums[len-2];
        else if(nums2[0] <= nums2[len-1]) return nums2[len-1];
        else return max(nums2[len-1], max(nums[len-2], max(nums2[len-2], nums[len-3])));
    }
};