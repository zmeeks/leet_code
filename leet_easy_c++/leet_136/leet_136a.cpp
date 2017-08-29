class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> umap;
        int len = nums.size();
        for(int i=0; i<len; i++)  umap[nums[i]]=0;
        for(int i=0; i<len; i++)  umap[nums[i]]++;
        for(int i=0; i<len; i++) if(umap[nums[i]]==1) return nums[i];
        return 0;
    }
};