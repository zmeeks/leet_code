class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cur = 0;
        for(auto i=nums.begin(); i<nums.end(); ++i){
            if(*i != val){
                nums[cur] = *i;
                ++cur;
            }
        }
        return cur;
    }
};