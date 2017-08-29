class Solution {
public:
    string reverseStr(string s, int k) {
        for(int pos=0, len = s.size(); pos<len; pos+=(2*k)){
            if(pos+k <= len) reverse(s.begin()+pos, s.begin()+pos+k);
            else reverse(s.begin()+pos, s.end());
        } 
        return s;
    }
};