class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int dif, cnt = 0, len=nums.size();
        if(k==0){
            unordered_map<int, int> umap;
            for(int i=0; i<len; i++){
                umap[nums[i]]++;
                if(umap[nums[i]] == 2) cnt++;
            } 
        }
        else{
            sort(nums.begin(), nums.end());
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