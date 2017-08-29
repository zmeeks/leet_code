class Solution {
public:
    int rob(vector<int>& nums) {
        int ans = 0;
        int len = nums.size();
        if(len < 3){
            if(len == 0) return 0;
            if(len == 1) return nums[0];
            if(len == 2) return max(nums[0], nums[1]);
        } 
        nums[2] += nums[0];
        for(int i=3; i<len; i++)
            nums[i]= max(nums[i-2], nums[i-3]) + nums[i];
        ans = max(nums[len-1], nums[len-2]);
        return ans;
    }
};