class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        auto ender = unique(nums.begin(), nums.end());
        for(auto it = nums.begin(); it != ender; it++) count++;
        return count;
    }
};