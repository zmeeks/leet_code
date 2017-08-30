class Solution {
public:
    int numDecodings(string s) {
        int prev, cur, flag = 0, tot = 1, len = s.size(), ret = 1; 
        if(len==0 || s[0]=='0') return 0;
        prev = s[0] - '0';
        for(int i=1; i<len; i++){
            cur = s[i] - '0';
            if(prev == 0 && cur == 0) return 0;
            if(cur == 0 && prev*10 > 20 ) return 0;
            if(prev*10 + cur <= 26 && prev!= 0 && cur!=0){
                flag = 2;
                tot+=1;
            } 
            if(cur == 0 && flag ==1) tot-=1;
            prev = s[i] - '0';
            flag--;
            if(flag < 1){
                ret *= fib_func(tot);
                tot = 1;
            }
        }
        if(flag > 0 && tot != 1){
            ret *= fib_func(tot);
        }
        return ret;
    }
    
private:    
    int fib_func(int k){
        if(k <= 3) return k;
        int tmp, a = 1, b = 2;
        for(int i=2 ; i<k; i++){
            tmp = b;
            b += a;
            a = tmp;
        }
        return b;
    }
};
