class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int len_j = matrix.size();
        if(len_j == 0) return false;
        int len_i = matrix[0].size(), i=0, j=len_j-1;
        if(len_i == 0) return false;
        while(j>=0){
            while(i >= 0 && i<len_i-1 && matrix[j][i] < target ) i++;
            if(matrix[j][i] == target) return true;
            if(i==len_i-1 && matrix[j][i] < target) return false;
            j--;
        }
        return false;   
    }
};
 
// this much faster than 240 a,b,c. For what ever reason the test cases now favor this direction over the direction coresponding to start of i=len_i-1, j=0