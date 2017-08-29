class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int> vec(20001,0);
        int sum = 0, len = nums.size();
        for(int i=0; i<len; i++)    vec[nums[i]+10000]++;
        for(int i=0; i<20001; i++){
            if(vec[i]>0){
                sum+=i-10000;
                vec[i]--;
                for(int j=i; j<20001; j++) 
                    if(vec[j]>0){
                        vec[j]--;
                        i=j-1;
                        break;
                    } 
            }
        }
        return sum;
    }
};

//very fast solution with bucket sort