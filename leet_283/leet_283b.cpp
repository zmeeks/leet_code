class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        reverse(nums.begin(),nums.end());
        stable_sort(nums.begin(), nums.end(), [](int a, int b){return a!=0 || b==0;});
    }
};
// same speed as first implementation but more concise code