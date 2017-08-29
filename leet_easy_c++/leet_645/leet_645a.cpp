class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> umap;
        vector<int> vec(2,0);
        int len=nums.size(), res = 0;
        for(int i=1; i<=len; i++) res^=i;
        for(int i=0; i<len; i++){
            if(umap.count(nums[i])){
                res^=nums[i];
                vec[0] = nums[i];
            } 
            umap[nums[i]]++;
            res^=nums[i];
        }
        vec[1]=res;
        return vec;
    }
};