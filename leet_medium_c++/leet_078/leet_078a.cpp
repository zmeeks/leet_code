class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int sz, sz2, len = nums.size();
        vector<vector<int> > vec, tmp;
        if(len == 0) return (vector<vector<int>>){{}}; 
        vec.emplace_back((vector<int>){nums[0]});
        for(int i=1; i<len; i++){
            sz = vec.size();
            sz2 = 2*sz;
            tmp = vec;
            vec.insert(vec.end(), tmp.begin(), tmp.end());
            for(int j=sz; j<sz2; j++) vec[j].emplace_back(nums[i]); 
            vec.emplace_back((vector<int>){nums[i]});
        }
        vec.emplace_back((vector<int>){});
        return vec;
    }
};