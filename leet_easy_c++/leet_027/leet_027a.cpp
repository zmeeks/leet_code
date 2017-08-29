class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cur = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            while(nums[i] == val && i<n) i++;
            if(i<n){
                nums[cur] = nums[i];
                cur++;
            }
        }
        return cur;
    }
};

//note: this solution not necessarilly any better than other solution.  both perform well (3ms) sometimes and sometimes not (6ms).