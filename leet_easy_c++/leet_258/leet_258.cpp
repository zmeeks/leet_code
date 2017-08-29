class Solution {
public:
    int addDigits(int num) {
        string tmp;
        int len;
        while(num > 9){
            tmp = to_string(num);
            len = tmp.size();
            num = 0;
            for(int i=0; i<len; i++){
                num += tmp[i] - '0';
            }
        }
        return num;
    }
};