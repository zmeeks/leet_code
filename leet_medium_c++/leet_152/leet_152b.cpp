class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len = nums.size();
        if(len == 0) return 0;
        if(len == 1) return nums[0];
        int ans = INT_MIN, temp = 1;
        for(int i=0; i<len; i++){
            temp = temp*(*(nums.begin()+i));
            ans = max(ans, temp);
            if(temp == 0) temp = 1;
        }
        temp = 1;
        for(int i=len-1; i>=0; i--){
            temp = temp*(*(nums.begin()+i));
            ans = max(ans, temp);
            if(temp == 0) temp = 1;
        }
        return ans;
    }
};