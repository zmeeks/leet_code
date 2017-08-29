class Solution {
public:
    string reverseVowels(string s) {
        stack<char> stk;
        int len = s.size();
        for(int i=0; i<len; i++) if(is_vowell(s[i])) stk.emplace(s[i]);
        for(int i=0; i<len; i++) if(is_vowell(s[i])){
            s[i] = stk.top();
            stk.pop();
        }
        return s;
    }
    
    bool is_vowell(char c){
        switch(c){
            case 'a': 
            case 'e': 
            case 'i': 
            case 'o':
            case 'u': 
            case 'A':
            case 'E': 
            case 'I': 
            case 'O': 
            case 'U': return true;
            default: return false;
        }
    }
};