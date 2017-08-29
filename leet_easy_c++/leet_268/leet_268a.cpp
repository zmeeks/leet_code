class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> umap;
        int len=nums.size();
        for(int i=0; i<len; i++)
            umap[*(nums.begin()+i)]=1;
        for(int i=0; i<=len; i++)
            if(umap.find(i)==umap.end()) 
                return i;
    }
};