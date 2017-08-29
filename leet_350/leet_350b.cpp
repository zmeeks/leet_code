class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> vec;
        int len1=nums1.size(), len2=nums2.size();
        for(int i=0, j=0; i<len1 && j<len2; ){
            if(nums1[i] == nums2[j]){
                vec.emplace_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]) i++;
            else j++;
        }
        return vec;
    }
};

// if arrays were already sorted in ascending order then we could comment out lines 4 and 5.