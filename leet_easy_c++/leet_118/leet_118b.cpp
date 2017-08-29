class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> sol(numRows);
        for(int i=0; i<numRows; i++){
            sol[i].resize(i+1,1);
            for(int j=0; j<i-1; j++){             
                sol[i][j+1] = sol[i-1][j]+sol[i-1][j+1];
            }
        }
        return sol;
    }
};
