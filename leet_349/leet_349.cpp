class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 = nums2.size();
        unordered_map<int, int> umap;
        vector<int> ret;
        for(int i=0; i<len1; i++) umap[nums1[i]] = 1;
        for(int i=0; i<len2; i++) 
            if(umap.count(nums2[i]) && umap[nums2[i]]>0){
                umap[nums2[i]] = 0;
                ret.emplace_back(nums2[i]);
            } 
        return ret;
    }
};