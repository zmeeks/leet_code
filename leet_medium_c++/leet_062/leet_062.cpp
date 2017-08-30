class Solution {
public:
    int uniquePaths(int m, int n) {
        int k = m*n;
        if(k==0) return 0;
        int * grid = new int[k];
        for(int i=0; i<n; i++) grid[i] = 1;
        for(int i=n; i<k; i+=n) grid[i] = 1;
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                grid[(i*n)+j] = grid[(i*n)-n+j] + grid[(i*n)+j-1];
            }
        }
        k=grid[k -1];
        delete[] grid;
        return k;
    }
};