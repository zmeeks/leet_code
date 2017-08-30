class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        cnt=0, len_i = grid.size();
        if(len_i == 0) return 0;
        len_j = grid[0].size();
        for(int i=0; i<len_i; i++){
            for(int j=0; j<len_j; j++){
                if(grid[i][j] == '1') set_zeros(grid, i, j, 1);
            }
        }
        return cnt;
    }
    
    void set_zeros(vector<vector<char>>& grid, int i, int j, int flag){
        grid[i][j] = '0';
        if(flag == 1) cnt++;
        if(i>0 && grid[i-1][j]=='1') set_zeros(grid, i-1, j, 0);
        if(i<len_i-1 && grid[i+1][j]=='1') set_zeros(grid, i+1, j, 0);
        if(j>0 && grid[i][j-1]=='1') set_zeros(grid, i, j-1, 0);
        if(j<len_j-1 && grid[i][j+1]=='1') set_zeros(grid, i, j+1, 0);
    }
    
private:
    int cnt, len_i, len_j;
};