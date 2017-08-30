class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int sz, sz2, len = nums.size();
        vector<vector<int> > vec((1<<len));
        for(int i=0; i<len; i++){
            sz = 1<<i;
            sz2 = sz<<1;
            for(int j=sz; j<sz2; j++) vec[j] = vec[j-sz];
            for(int j=sz; j<sz2; j++) vec[j].emplace_back(nums[i]); 
        }
        return vec;
    }
};