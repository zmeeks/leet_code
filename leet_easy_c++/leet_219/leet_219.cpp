class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        int len = nums.size();
        for(int i=0; i<len; i++){
            if(umap.find(nums[i]) == umap.end())
               umap[nums[i]]=i;
            else if(i - umap[nums[i]] <= k) 
                return true;
            else
                umap[nums[i]]=i;
        }
        return false;
    }
};