class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int mx, len = nums.size();
        for(int i=1; i<len; i++) nums[i]+=nums[i-1];
        mx = nums[k-1];
        for(int i=k; i<len; i++){
            mx = max(mx, nums[i] - nums[i-k]);
        } 
        return (double)mx/(double)k;
    }
};
// for whatever reason, the *(num.begin()+i) implementation of this version is always a bit slower than this num[i] version.