class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        stable_sort(nums.begin(), nums.end(), [](int a, int b){return a!=0 || b==0;});
        int i=0;
        while(i<nums.size() && nums[i]!=0) i++;
        reverse(nums.begin(), nums.begin()+i);
    }
};
