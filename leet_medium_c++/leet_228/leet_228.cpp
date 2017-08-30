class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int a, len = nums.size();
        for(int i=0; i<len; i++){
            a = i;
            while(i+1<len && nums[i] == nums[i+1]-1) i++;
            if(a!=i) ans.emplace_back(to_string(nums[a])+"->"+to_string(nums[i]));
            else ans.emplace_back(to_string(nums[a]));
        }
        return ans;
    }
};