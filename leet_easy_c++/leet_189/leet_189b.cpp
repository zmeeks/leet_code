class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        if(k>=len) k = k%len;
        int dif = len - k;
        vector<int> nums2(nums.begin(), nums.begin()+dif);
        for(int j=0,i=dif; i<len; j++,i++) *(nums.begin()+j) = *(nums.begin()+i);
        for(int j=0, i=k; i<len; j++, i++) *(nums.begin()+i) = *(nums2.begin()+j);
    }
};