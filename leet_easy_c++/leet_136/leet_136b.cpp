class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> umap;
        int len = nums.size();
        if(len == 0) return 0;
        for(int i=0; i<len; i++)  umap[nums[i]]=0;
        for(int i=0; i<len; i++){           
            if(umap[nums[i]]==1) umap.erase(nums[i]);
            else  umap[nums[i]]++;
        }  
        return umap.begin()->first;
    }
};