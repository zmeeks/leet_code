class Solution {
public:
    string reverseStr(string s, int k) {
        char tmp;
        for(int pos=0, len = s.size(); pos<len; pos+=(2*k)){
            for(int i=pos, j = (pos+k < len ? pos + k -1 : len -1); i<j; i++, j--){
                tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        } 
        return s;
    }
};