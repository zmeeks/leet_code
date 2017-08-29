class Solution {
public:
    int romanToInt(string s) {
        char buf;
        int sub=0, last=0, tmp=0;
        for(int i=s.size()-1; i>=0; i--){
            buf = s[i];
            tmp = romanCharToInt(buf);
            sub += (tmp >= last ? tmp : -1*tmp);
            last = tmp;
        }
        return sub;
    }
    
    int romanCharToInt(char c){
        switch(c){
            case 'I':   return 1;
            case 'V':   return 5;
            case 'X':   return 10;
            case 'L':   return 50;
            case 'C':   return 100;
            case 'D':   return 500;
            case 'M':   return 1000;
        }
    }
};