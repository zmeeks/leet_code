class Solution {
public:
    string reverseVowels(string& s) {
        char tmp;
        for(int i=0, j=s.size()-1; i<j; i++, j--){
            i=s.find_first_of("aeiouAEIOU", i);
            j=s.find_last_of("aeiouAEIOU", j);
            tmp=s[i];
            if(i>j) break;
            s[i]=s[j];
            s[j]=tmp;
        } 
        return s;
    }
};