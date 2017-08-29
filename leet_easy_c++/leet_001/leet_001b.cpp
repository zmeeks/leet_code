class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        vector<int> sol(2,0);
        int tmp, len = nums.size();
        for(int i=0; i<len; i++) umap[*(nums.begin()+i)] = i;
        for(int i=0; i<len; i++){
            tmp = target - *(nums.begin()+i);
            if(tmp<<1 != target){
                if(umap.find(tmp) != umap.end()){
                    sol[0] = i;
                    sol[1] = umap[tmp];
                    return sol;
                }   
            }
            else if(umap.find(tmp) != umap.end()){
                if (umap[tmp] != i){
                    sol[0] = i;
                    sol[1] = umap[tmp];
                    return sol;
                }
            }
        }
        return sol; //should never get here given specs 
    }
};