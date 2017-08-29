class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        vector<int> sol = {0, 0};
        for(int i=1; i<length; i++){
            for(int j=0; j<i; j++){
                if(nums[i]+nums[j]==target){
                    sol[0]=j;
                    sol[1]=i;
                    return sol;
                }
            }
        }
    }
};