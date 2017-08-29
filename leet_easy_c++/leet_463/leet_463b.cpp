class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int len_i = grid.size();
        if(len_i == 0) return 0;
        int perim_h=0, perim_v=0, len_j = grid[0].size();
        for(int i=0; i<len_i; i++){
            for(int j=0; j<len_j; j++){
                if(grid[i][j] == 1){
                    while(j<len_j && grid[i][j]==1){
                        if(i==0) perim_h++;
                        if(i==len_i-1) perim_h++;
                        if(i!=(len_i-1) && grid[i+1][j]!=1) perim_h++;
                        if(i!=0 && grid[i-1][j]!=1) perim_h++;
                        j++;
                    } 
                    perim_v++;
                } 
            }
        }
        return (perim_v<<1) + perim_h;
    }
};