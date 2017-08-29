class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b){ return a>=b; });
        auto it = unique(nums.begin(), nums.end());
        int len, cnt = 0;
        for(auto iter = nums.begin(); cnt<3 && iter != it; ++iter) cnt++;    
        if(cnt<3) return nums[0];
        else return nums[2];
    }
};