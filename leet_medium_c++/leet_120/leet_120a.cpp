class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int ret = INT_MAX, row_iter = 1, col_iter = 0, cols = 2, rows=triangle.size();
        if(rows == 0) return 0;
        if(rows == 1) return triangle[0][0];
        while(cols <= rows){
            while(col_iter < cols){
                if(col_iter == 0) triangle[row_iter][col_iter] += triangle[row_iter - 1][col_iter];
                else if(col_iter == cols - 1) triangle[row_iter][col_iter] += triangle[row_iter - 1][col_iter - 1];
                else triangle[row_iter][col_iter] += min(triangle[row_iter - 1][col_iter], triangle[row_iter - 1][col_iter - 1]);
                col_iter++;
            }
            row_iter = cols;
            col_iter = 0;
            cols++;
        }
        for(int i = 0; i < rows; i++) ret = min(ret, triangle[rows-1][i]);
        return ret;
    }
};