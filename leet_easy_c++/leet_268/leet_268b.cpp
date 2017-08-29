class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len=nums.size()-1;
        for(int i=0; i<len; i++) 
            if(nums[i] != nums[i+1] && nums[i]+1 != nums[i+1]) 
                return nums[i]+1;
        return nums[0]==0 ? len+1 : 0;
    }
};
/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len=nums.size()-1;
        for(int i=0; i<len; i++) 
            if(*(nums.begin()+i) != *(nums.begin()+i+1) && *(nums.begin()+i)+1 != *(nums.begin()+i+1)) 
                return *(nums.begin()+i)+1;
        return nums[0]==0 ? len+1 : 0;
    }
};
*/

//NOTE: the random access [] solution above performs the best. even better than the "linear time solution"
//NOTE: the commented out solution also performs better than the "linear time solution" but not as good as the [] sol above it