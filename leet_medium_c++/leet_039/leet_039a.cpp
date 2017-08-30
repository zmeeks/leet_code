class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> sols;
        vector<int> sol;
        int max_iter = candidates.size() - 1;
        rec_func(candidates, target, sol, sols, 0, max_iter);
        return sols;
    }
    
    void rec_func(vector<int>& candidates, int& target, vector<int> sol, vector<vector<int>>& sols, int iter, int& max_i){
        int sov = sum_of_v(sol);
        if(sov == target)
            sols.push_back(sol);
        if(sov < target && iter <= max_i){
            if(iter+1 <= max_i)
                rec_func(candidates, target, sol, sols, iter+1, max_i);
            sol.push_back(candidates[iter]);
            rec_func(candidates, target, sol, sols, iter, max_i);            
        }
    }
    
    int sum_of_v(vector<int>& vec){
        int n = vec.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            sum+=vec[i];
        }
        return sum;
    }
    
};