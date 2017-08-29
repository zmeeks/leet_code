class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0, high = s.size() - 1;
        while(low<high){
            while(low <= high && !isalpha(*(s.begin()+low)) && !isdigit(*(s.begin()+low))) low++;
            while(low <= high && !isalpha(*(s.begin()+high)) && !isdigit(*(s.begin()+high))) high--;
            if(low > high) return true;
            if(toupper(*(s.begin()+low)) != toupper(*(s.begin()+high))) return false;
            high--;
            low++;
        }
        return true;
    }
};