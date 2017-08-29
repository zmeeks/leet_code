class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int> nums2 = nums;
        for(int i=k, j=0; j<len; i++,j++) nums2[i%len]=nums[j];
        nums=nums2;
    }
};