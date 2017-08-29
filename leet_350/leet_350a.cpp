class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> umap;
        vector<int> vec;
        int len1=nums1.size(), len2=nums2.size();
        for(int i=0; i<len1; i++) umap[nums1[i]]++;
        for(int i=0; i<len2; i++) if(umap.count(nums2[i]) && umap[nums2[i]] > 0){
            vec.emplace_back(nums2[i]);
            umap[nums2[i]]--;
        }
        return vec;
    }
};