class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> umap;
        int tmp, dif, len = numbers.size();
        vector<int> sol(2,0);
        for(int i=0; i<len; i++){
            tmp = *(numbers.begin()+i);
            dif = target - tmp;
            if(umap.find(dif) != umap.end()){
                sol[0] = umap[dif] + 1;
                sol[1] = i + 1;
                return sol;
            }
            umap[tmp] = i;
        }
        return sol;
    }
};