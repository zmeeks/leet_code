class Solution {
public:
    char findTheDifference(string s, string t) {
        int ltr=0, len_s=s.size(), len_t=t.size();
        for(int i=0; i<len_s; i++) ltr^=s[i];
        for(int i=0; i<len_t; i++) ltr^=t[i];
        return (char)ltr;                         
    }
};