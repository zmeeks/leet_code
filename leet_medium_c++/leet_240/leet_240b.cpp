class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0, j=0, len_j = matrix.size();
        if(len_j == 0) return false;
        int len_i = matrix[0].size();
        if(len_i == 0) return false;
        int flag = 0;
        while(j<len_j){
            if(i>=0 && i<len_i-1 && matrix[j][i] < target)
                while(i>=0 && i<len_i-1 && matrix[j][i] < target ){
                    i++;
                    flag = 1;
                } 
            else if(i > 0 && i<len_i && matrix[j][i] > target )
                while(i > 0 && i<len_i && matrix[j][i] > target ){
                    i--;
                    flag = 2;
                }
            if(matrix[j][i] == target) return true;
            if(flag == 1){
                i--;
            }
            else if(flag == 2){
                i++;
            }
            if(matrix[j][i] == target) return true;
            flag = 0;
            j++;
        }
        return false;   
    }
};

// NOTE: using iterators instead of [] here resulted in slower run times. this version same official run time as last version, but flag ops should be marginally less