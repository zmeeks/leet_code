class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret = 0, len = nums.size();
        for(int i=0; i<len; i++) ret^= nums[i];
        return ret;
    }
};