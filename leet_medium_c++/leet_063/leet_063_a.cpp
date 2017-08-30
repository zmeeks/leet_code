class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obs_grid) {
        int len_i = obs_grid.size();
        if(len_i == 0) return 0;
        int len_j = obs_grid[0].size();
        int k = len_i*len_j;
        int * grid = new int[k];
        grid[0] = (obs_grid[0][0]==0 ? 1 : 0);
        for(int i=1; i<len_j; i++){ 
            if(obs_grid[0][i]==1)
                grid[i] = 0;
            else if(grid[i-1]==1)
                grid[i] = 1;
            else
                grid[i] = 0;
        } 
        for(int i=1; i<len_i; i++){ 
            if(obs_grid[i][0]==1)
                grid[i*len_j] = 0;
            else if(grid[(i-1)*len_j]==1)
                grid[i*len_j] = 1;
            else
                grid[i*len_j] = 0;
        } 
        for(int i=1; i<len_i; i++){ 
            for(int j=1; j<len_j; j++){
                if(obs_grid[i][j]==1)
                    grid[(len_j*i)+j] = 0;
                else
                    grid[(len_j*i)+j] = grid[(len_j*i)-len_j+j] + grid[(len_j*i)+j-1];    
            }
        } 
        int res = grid[k-1];
        delete[] grid;
        return res;
    }
};