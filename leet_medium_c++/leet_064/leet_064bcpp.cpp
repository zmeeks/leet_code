class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        if(n==0) return 0;
        int m = grid[0].size();
        vector<int> dp(m,0);
        if(m==0) return 0;
        dp[0] = grid[0][0];
        for(int i=1; i<m; i++) dp[i] = grid[0][i] + dp[i-1];
        for(int i=1; i<n; i++){
            dp[0]+=grid[i][0];
            for(int j=1; j<m; j++){
                dp[j] = grid[i][j] + min(dp[j-1], dp[j]);
            }
        }
        n = dp[m-1];
        return n;
    }
};