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
                tmp = umap[dif] + 1;
                dif = i + 1;
                sol[0] = min(tmp, dif);
                sol[1] = max(tmp, dif);
                return sol;
            }
            umap[tmp] = i;
            tmp = *(numbers.end()-1-i);
            dif = target - tmp;
            if(umap.find(dif) != umap.end()){
                tmp = umap[dif] + 1;
                dif = len - i;
                sol[0] = min(tmp, dif);
                sol[1] = max(tmp, dif);
                return sol;
            }
            umap[tmp] = len - i - 1;
        }
        return sol;
    }
};