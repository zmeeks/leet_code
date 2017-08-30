class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> left(len);
        vector<int> right(len);
        if(len<=1) return nums;;
        vector<int> res(len, 1);
        left[0] = nums[0];
        right[len-1] = nums[len-1];
        for(int i=1; i<len; i++) left[i] = left[i-1]*nums[i];
        for(int i=len-2; i>=0; i--) right[i] = right[i+1]*nums[i];
        res[0] = right[1];
        res[len-1] = left[len-2];
        for(int i=1; i<len-1; i++) res[i] = left[i-1]*right[i+1];
        return res;
    }
};