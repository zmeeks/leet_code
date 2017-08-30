class Solution {
public:
    int search(vector<int>& nums, int target) {
        int r = nums.size() - 1, l = 0, m = l + ceil((r-l)/2);
        if(r<0) return -1;
        while(l<=r){
            if(nums[m] == target) return m;
            else if(nums[m]<target && nums[r]>=target) l = m+1;
            else if(nums[m]>target && nums[r] >= target && nums[m]>nums[r]) l = m+1;
            else if(nums[m]<target && nums[r] <= target && nums[m]>nums[r]) l = m+1;
            else r = m-1;
            m = l + ceil((r-l)/2);
        }
        if(nums[m] == target) return m;
        else return -1;
    }
};
