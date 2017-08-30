class Solution {
public:
    int maxKilledEnemies(vector<vector<char>>& grid) {
        int rows = grid.size();
        if(rows == 0) return 0;
        int cols = grid[0].size();
        if(cols == 0) return 0;
        vector<vector<int>> check(rows);
        for(int i=0; i<rows; i++) check[i].resize(cols);
        vector<int> left(cols);
        vector<int> right(cols);
        vector<int> up(rows);
        vector<int> down(rows);
        int max_kill = 0;
        for(int j=0; j<rows; j++){
            fill(left.begin(), left.end(), 0);
            fill(right.begin(), right.end(), 0);
            for(int i=1; i<cols; i++){
                if(grid[j][i-1] == 'E') left[i] = left[i-1]+1;
                else if(grid[j][i-1] == 'W') left[i] = 0;
                else left[i] = left[i-1];
            } 
            for(int i=cols-2; i>=0; i--){
                if(grid[j][i+1] == 'E') right[i] = right[i+1]+1;
                else if(grid[j][i+1] == 'W') right[i] = 0;
                else right[i] = right[i+1];
            } 
            for(int i=0; i<cols; i++) check[j][i] = left[i] + right[i];
        }
        for(int j=0; j<rows; j++){
            for(int i=0; i<cols; i++){
                if(grid[j][i] == 'E' || grid[j][i] == 'W') check[j][i] = 0;
            }
        }
        for(int i=0; i<cols; i++){
            fill(up.begin(),up.end(),0);
            fill(down.begin(), down.end(),0);
            for(int j=1; j<rows; j++){
                if(grid[j-1][i] == 'E') down[j] = down[j-1]+1;
                else if(grid[j-1][i] == 'W') down[j] = 0;
                else down[j] = down[j-1];
            } 
            for(int j=rows-2; j>=0; j--){
                if(grid[j+1][i] == 'E') up[j] = up[j+1]+1;
                else if(grid[j+1][i] == 'W') up[j] = 0;
                else up[j] = up[j+1];
            } 
            for(int j=0; j<rows; j++) check[j][i] += down[j] + up[j];
        }
        for(int j=0; j<rows; j++){
            for(int i=0; i<cols; i++){
                if(grid[j][i] == 'E' || grid[j][i] == 'W') check[j][i] = 0;
                if(check[j][i] > max_kill) max_kill = check[j][i];
            }
        }
        return max_kill;
    }
};