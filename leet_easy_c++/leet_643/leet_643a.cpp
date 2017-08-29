class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int mx, tmp=0, len = nums.size();
        for(int i=0; i<k; i++) tmp += nums[i];
        mx = tmp; 
        for(int i=k; i<len; i++){
            tmp = tmp - nums[i-k] + nums[i];
            mx = max(mx, tmp);
        } 
        return (double)mx/(double)k;
    }
};