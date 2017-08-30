class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ret;
        int stop, len = nums.size();
        for(int i=0; i<len; i++){
            stop = ret.size();
            for(int j=0; j<stop; j++){
                ret.emplace_back(ret[j]);
                ret[j].emplace_back(nums[i]);
            }
            ret.emplace_back((vector<int>){nums[i]});
        }
        ret.emplace_back(vector<int>{});
        len = ret.size();
        for(int k=0; k<len; k++) sort(ret[k].begin(), ret[k].end());
        sort(ret.begin(), ret.end());
        auto it = unique(ret.begin(),ret.end());
        ret.erase(it, ret.end());
        return ret;
    }
};