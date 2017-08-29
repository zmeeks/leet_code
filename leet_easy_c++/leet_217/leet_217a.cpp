class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i=0, len=nums.size(); i<len; i++){
            umap[nums[i]]++;
            if(umap[nums[i]]>1) return true;
        }
        return false;
    }
};