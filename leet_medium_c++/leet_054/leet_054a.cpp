class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int len = matrix.size();
        if(len==0) return (vector<int>){}; if(len==1) return matrix[0];
        int wid = matrix[0].size();
        if(wid==0) return (vector<int>){};
        vector<vector<int> > m = matrix;
        for(int i=0; i<len; i++) fill(m[i].begin(), m[i].end(), 0);
        int i = 0, j = 0, max_num = len*wid, cnt = 0;
        vector<int> ret(max_num, 0);
        int dir = 0; // 0=right, 1=down, 2=left, 3=up //
        while(cnt != max_num){
            ret[cnt] = matrix[i][j];
            m[i][j] = 1;
            switch(dir){
                case 0: if(j<wid-1 && m[i][j+1] != 1) j++;
                        else{
                            i++;
                            dir = 1;
                        } 
                        break;
                case 1: if(i<len-1 && m[i+1][j] != 1) i++;
                        else{
                            j--;
                            dir = 2;
                        } 
                        break;
                case 2: if(j>0 && m[i][j-1] != 1) j--;
                        else{
                            i--;
                            dir = 3;
                        } 
                        break;
                case 3: if(i>0 && m[i-1][j] != 1) i--;
                        else{
                            j++;
                            dir = 0;
                        }
            }
            cnt++;
        }
        return ret;
    }
};