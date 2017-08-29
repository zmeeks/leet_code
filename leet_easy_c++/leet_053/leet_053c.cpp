class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        if(len == 0) return 0;
        int tmp = 0, ans = INT_MIN;
        for(int i=0; i<len; i++){
            tmp += *(nums.begin()+i);
            ans = max(tmp, ans);
            tmp = max(0, tmp);
        }
        return ans;      
    }
};

// NOTE: this version faster than prev two