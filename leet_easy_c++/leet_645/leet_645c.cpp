class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int len=nums.size();
        vector<int> res(2);
        vector<int> vec(len+1, 1);
        for(int i=0; i<len; i++) vec[nums[i]]--;
        for(int i=1; i<=len; i++){
            if(vec[i]==-1) res[0]=i;
            if(vec[i]==1) res[1]=i;
        }
        return res;
    }
};