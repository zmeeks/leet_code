class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> sol;
        if(numRows == 0) return sol;
        sol.emplace_back(vector<int>{1});
        if(numRows == 1) return sol;
        for(int i=1; i<numRows; i++){
            vector<int> row(1,1);
            for(int j=0; j<i-1; j++){
                row.emplace_back(sol[i-1][j]+sol[i-1][j+1]);
            }
            row.emplace_back(1);
            sol.emplace_back(row);
        }
        return sol;
    }
};