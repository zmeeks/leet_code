class Solution {
public:
    string convertToTitle(int n) {
        string res = "";
        char buf;
        while(n>0){
            n = n-1;
            buf = 'A' + n%26;
            res = buf + res;
            n/=26;
        }
        return res;
    }
};