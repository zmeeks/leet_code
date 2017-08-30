class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0, j=0, len_j = matrix.size();
        if(len_j == 0) return false;
        int len_i = matrix[0].size();
        if(len_i == 0) return false;
        bool flag = true;
        while(j<len_j){
            if(i>=0 && i<len_i-1 && matrix[j][i] < target)
                while(i>=0 && i<len_i-1 && matrix[j][i] < target ){
                    i++;
                    flag = true;
                } 
            else if(i > 0 && i<len_i && matrix[j][i] > target )
                while(i > 0 && i<len_i && matrix[j][i] >= target ){
                    i--;
                    flag = false;
                } 
            if(matrix[j][i] == target) return true;
            if(flag){
                i--;
                flag = false;
            }
            else{
                i++;
                flag = true;
            }
            if(i<0) i=0;
            if(i>=len_i) i=len_i-1;
            if(matrix[j][i] == target) return true;
            j++;
        }
        return false;   
    }
};