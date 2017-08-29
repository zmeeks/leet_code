class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = s.size() - 1;
        if(j<0) return 0;
        while(j>0 && *(s.begin() + j) == ' ') j--;
        if(j==0 && *(s.begin()) == ' ') return 0;
        int i = j;
        while(i>0 && *(s.begin() + i) != ' ') i--;
        if(*(s.begin()+i) == ' ') return j - i;
        return j - i + 1;
    }
};