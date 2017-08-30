class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> sols;
        vector<int> sol;
        int max_iter = candidates.size() - 1;
        rec_func(candidates, target, sol, sols, 0, max_iter, 0);
        return sols;
    }
    
    void rec_func(vector<int>& candidates, int& target, vector<int> sol, vector<vector<int>>& sols, int iter, int& max_i, int sum){
        if(sum < target){
            if(iter+1 <= max_i)
                rec_func(candidates, target, sol, sols, iter+1, max_i, sum);
            int num = candidates[iter];
            sol.push_back(num);
            rec_func(candidates, target, sol, sols, iter, max_i,sum+num);            
        }
        else if(sum == target)
             sols.push_back(sol);
    }
    
};