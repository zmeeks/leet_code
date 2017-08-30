class Solution {
public:
    int findMin(vector<int>& nums) {
        int a = 0, c = nums.size() - 1, b = (a+c)/2;
        while(b!=a){
            if(nums[a] < nums[b] && nums[b] < nums[c]) return nums[a];
            else if(nums[c] < nums[b] && nums[c]< nums[a]){
                a = b+1;
                b = (a+c)/2;
            }
            else if(nums[b] < nums[c]){
                a = a+1;
                c = b;
                b = (a+c)/2;
            }
            else if(nums[c] < nums[a]){
                a = b;
                b = (a+c)/2;
            }
        }
        return min(nums[a], nums[c]);
    }
};