class Solution {
public:
    string convertToTitle(int n) {
        if(n==0) return "";
        n = n-1;
        char buf = 'A' + (n%26);
        string next = convertToTitle(n/26);
        return next + buf;
    }
};