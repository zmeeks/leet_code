class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1, j = num2.size() - 1, tmp = 0;
        char buf;
        string ret = "";
        while(i>=0 || j>= 0 || tmp){
            if(i>=0){
                tmp += num1[i] - '0';
                i--;
            }
            if(j>=0){
                tmp += num2[j] - '0';
                j--;
            }
            buf = tmp%10 + '0';
            ret += buf;
            tmp/=10;
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};