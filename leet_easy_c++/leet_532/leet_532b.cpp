class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int dif, cnt = 0, len=nums.size();
        sort(nums.begin(), nums.end());
        if(k==0){       
            for(int i=1; i<len; i++){
                if(nums[i]==nums[i-1]){
                    cnt++;
                    while(i<len && nums[i]==nums[i-1]) i++;
                }
            } 
        }
        else{
            auto ender = unique(nums.begin(), nums.end());
            for(auto it=nums.begin(); it!=ender; it++){
                for(auto jt=it+1; jt!= ender; jt++){
                    dif = (*jt) - (*it);
                    if(dif == k){
                        cnt++;
                        break;
                    } 
                    else if(dif>k) break;
                }
            }
        }  
        return cnt;
    }
};
// faster than first solution