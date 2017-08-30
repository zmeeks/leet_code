class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int len_j = matrix.size();
        if(len_j == 0) return false;
        int len_i = matrix[0].size(), i=len_i-1, j=len_j-1;
        if(len_i == 0) return false;
        while(j>=0){
            if(i>0 && i<len_i && matrix[j][i] > target)
                while(i>0 && i<len_i && matrix[j][i]> target ){
                    i--;
                } 
            else if(i >= 0 && i<len_i-1 && matrix[j][i] < target )
                while(i >= 0 && i<len_i-1 && matrix[j][i] < target ){
                    i++;
                }
            if(matrix[j][i] == target) return true;
            j--;
        }
        return false;   
    }
};

//240b code runs faster; however, this should be faster by a small constant factor when amortized  --> test cases favor 240b search direction