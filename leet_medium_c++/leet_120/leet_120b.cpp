class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int ret = INT_MAX, row_iter = 1, col_iter = 0, cols = 2, rows=triangle.size();
        if(rows == 0) return 0; if(rows == 1) return triangle[0][0];
        for(;cols <= rows; row_iter = cols, col_iter = 0, cols++){
            for(;col_iter < cols; col_iter++){
                if(col_iter == 0) triangle[row_iter][col_iter] += triangle[row_iter - 1][col_iter];
                else if(col_iter == cols - 1) triangle[row_iter][col_iter] += triangle[row_iter - 1][col_iter - 1];
                else triangle[row_iter][col_iter] += min(triangle[row_iter - 1][col_iter], triangle[row_iter - 1][col_iter - 1]);
            }
        }
        for(int i = 0; i < rows; i++) ret = min(ret, triangle[rows-1][i]);
        return ret;
    }
};

// same code as 120a -- just more concise here