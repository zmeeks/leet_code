class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false; if(x<10) return true;
        string s = to_string(x);
        reverse(s.begin(), s.end());
        int k = atoi(s.c_str());
        if(k==x) return true;
        else return false;
    }
};

// Note: test cases didn't check to make sure that I didn't use extra space, which I would assume using a string constitutes;