class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<int> nums2 = nums;
        int len = nums.size();
        vector<string> ret(len);
        unordered_map<int, string> umap(len);
        sort(nums2.begin(), nums2.end(),[](int a, int b){ return a>b; });
        if(len > 0) umap[nums2[0]] = "Gold Medal";
        if(len > 1) umap[nums2[1]] = "Silver Medal";
        if(len > 2) umap[nums2[2]] = "Bronze Medal";
        for(int i=3; i<len; i++) umap[*(nums2.begin()+i)] = to_string(i+1);
        for(int i=0; i<len; i++) *(ret.begin()+i) = umap[*(nums.begin()+i)];
        return ret;
    }
};

//slightly faster