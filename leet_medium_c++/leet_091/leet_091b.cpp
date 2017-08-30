class Solution {
public:
    int numDecodings(string s) {
        int prev, cur, tmp, a=1, b=1, len = s.size(), ret=1; 
        if(len==0 || s[0]=='0') return 0;
        prev = s[0] - '0';
        for(int i=1; i<len; i++){
            cur = s[i] - '0';
            if(cur == 0 && (prev == 0 || prev*10 > 20)) return 0;
            if(prev*10 + cur <= 26 && prev!= 0 && cur!=0){
                tmp = b;
                b += a;
                a = tmp;
            } 
            else{
                if(cur==0) b=a;
                ret*=b;
                a = 1;
                b = 1;
            }
            prev = s[i] - '0';
        }
        if(b != 1) ret *= b;  
        return ret;
    }
};