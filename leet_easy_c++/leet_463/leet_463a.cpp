class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int len_i = grid.size();
        if(len_i == 0) return 0;
        int perim=0, len_j = grid[0].size();
        for(int i=0; i<len_i; i++){
            for(int j=0; j<len_j; j++){
                if(grid[i][j] == 1){
                    while(j<len_j && grid[i][j]==1) j++;
                    perim++;
                } 
            }
        }
        for(int j=0; j<len_j; j++){
            for(int i=0; i<len_i; i++){
                if(grid[i][j] == 1){
                    while(i<len_i && grid[i][j]==1) i++;
                    perim++;
                } 
            }
        }
        return perim<<1;
    }
};