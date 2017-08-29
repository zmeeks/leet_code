class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> vec(52);
        int ltr, cnt=0, len=s.size();
        for(int i=0; i<len; i++){
            ltr = ((s[i] - 'A') < 26 ? s[i] - 'A' : s[i] - 'a' + 26);
            if((++vec[ltr])%2 == 0) cnt+=2;
        } 
        return (cnt < len ? cnt+1 : cnt);
    }
};

//a=9ms, b,c=6ms, d=3ms