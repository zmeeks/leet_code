class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int sz, sz2, len = nums.size();
        vector<vector<int> > vec;
        vec.emplace_back((vector<int>){});
        for(int i=0; i<len; i++){
            sz = vec.size();
            sz2 = 2*sz;
            vec.resize(sz2);
            for(int j=sz; j<sz2; j++) vec[j] = vec[j-sz];
            for(int j=sz; j<sz2; j++) vec[j].emplace_back(nums[i]); 
        }
        return vec;
    }
};