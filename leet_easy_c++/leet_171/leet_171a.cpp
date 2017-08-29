class Solution {
public:
    int titleToNumber(string s) {
        int tmp = 0, tot = 0, cnt = 1;
        char buf;      
        while(s != ""){
            buf = s.back();
            s.pop_back();
            tmp = buf - 'A' + 1;
            tot+= cnt*tmp;
            cnt*=26;
        }
        return tot;
    }
};