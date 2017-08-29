class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        if(len == 0) return 0;
        if(len == 1) return nums[0];
        int tmp = nums[0];
        int ans = tmp;
        for(int i=1; i<len; i++){
            tmp = max(nums[i], tmp + nums[i]);
            ans = max(tmp, ans);
        }
        return ans;      
    }
};