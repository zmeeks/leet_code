class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0, high = s.size() - 1;
        for(; low<high; high--, low++){
            while(low <= high && !isalnum(*(s.begin()+low))) low++;
            while(low <= high && !isalnum(*(s.begin()+high))) high--;
            if(low<high && toupper(*(s.begin()+low)) != toupper(*(s.begin()+high))) return false;
        }
        return true;
    }
};