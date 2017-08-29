class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        if(len == 0) return 0;
        if(len == 1) return *(nums.begin());
        int tmp = *(nums.begin());
        int ans = tmp;
        for(int i=1; i<len; i++){
            tmp = max(*(nums.begin()+i), tmp + *(nums.begin()+i));
            ans = max(tmp, ans);
        }
        return ans;      
    }
};

// NOTE: random access version runs faster (for whatever reason)