class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int len_v = grid.size();
        if(len_v == 0) return 0;
        int len_h = grid[0].size(), cnt = 0;
        for(int i=0; i<len_v; i++){
            for(int j=0; j<len_h; j++){
                if(grid[i][j]=='1'){
                    cnt++;
                    grid[i][j] = 'x';
                    mark_as_counted(grid, i, j, len_v, len_h);
                }
            }
        }            
        return cnt;
    }
private:   
    void mark_as_counted(vector<vector<char>>& grids, int i, int j, int len_i, int len_j){
        if(i < len_i -1 && grids[i+1][j] == '1'){
            grids[i+1][j] = 'x';
            mark_as_counted(grids, i+1, j, len_i, len_j);
        }
        if(j < len_j -1 && grids[i][j+1] == '1'){
            grids[i][j+1] = 'x';
            mark_as_counted(grids, i, j+1, len_i, len_j);
        }
        if(i > 0 && grids[i-1][j] == '1'){
            grids[i-1][j] = 'x';
            mark_as_counted(grids, i-1, j, len_i, len_j);
        } 
        if(j > 0 && grids[i][j-1] == '1'){
            grids[i][j-1] = 'x';
            mark_as_counted(grids, i, j-1, len_i, len_j);
        }
    }
};
// I'm not sure why I solved the problem in this manner first time around.  version b, essentially the exact same thing as version a, has much better style!