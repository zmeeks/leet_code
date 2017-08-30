class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int len = matrix.size();
        if(len==0) return (vector<int>){}; if(len==1) return matrix[0];
        int wid = matrix[0].size();
        if(wid==0) return (vector<int>){};
        int i = 0, j = 0, max_num = len*wid, cnt = 0;
        vector<int> ret(max_num, 0);
        int tmp; 
        while(cnt != max_num){         
            for(tmp = j; j<wid+tmp; j++){
                ret[cnt] = matrix[i][j];
                cnt++;
            }
            len--;
            i++;
            j--;
            if(cnt == max_num) break;
            for(tmp=i; i<len+tmp; i++){
                ret[cnt] = matrix[i][j];
                cnt++;
            }
            wid--;
            j--;
            i--;
            if(cnt == max_num) break;
            for(tmp = j; j>tmp-wid; j--){
                ret[cnt] = matrix[i][j];
                cnt++;
            }
            len--;
            i--;
            j++;
            if(cnt == max_num) break;
            for(tmp=i; i>tmp-len; i--){
                ret[cnt] = matrix[i][j];
                cnt++;
            }
            wid--;
            j++;
            i++;
            if(cnt == max_num) break;
        }
        return ret;
    }
};
