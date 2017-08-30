class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obs_grid) {
        int len_i = obs_grid.size();
        if(len_i == 0) return 0;
        int len_j = obs_grid[0].size();
        obs_grid[0][0] = (obs_grid[0][0]==0 ? 1 : 0);
        for(int i=1; i<len_j; i++){ 
            if(obs_grid[0][i]==1) obs_grid[0][i] = 0;
            else obs_grid[0][i] = obs_grid[0][i-1];         
        } 
        for(int i=1; i<len_i; i++){ 
            if(obs_grid[i][0]==1) obs_grid[i][0]= 0;
            else obs_grid[i][0] = obs_grid[i-1][0];
        } 
        for(int i=1; i<len_i; i++)
            for(int j=1; j<len_j; j++) obs_grid[i][j] = (obs_grid[i][j]==1 ? 0 : obs_grid[i-1][j] + obs_grid[i][j-1]);

        return obs_grid[len_i-1][len_j-1];
    }
};