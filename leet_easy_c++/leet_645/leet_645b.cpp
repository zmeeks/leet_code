class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len=nums.size();
        vector<int> vec(2,1);
        for(int i=1; i<len; i++){
            if(nums[i]==nums[i-1]) vec[0]=nums[i];
            else if(nums[i] != nums[i-1]+1) vec[1]=nums[i-1]+1;
        }
        if(nums[len-1]!=len) vec[1]=len;
        return vec;
    }
};