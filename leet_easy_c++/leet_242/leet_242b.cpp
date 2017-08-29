class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> vec(26,0);
        int len_s = s.size(), len_t = t.size();
        if(len_s != len_t) return false;
        for(int i=0; i<len_s; i++) vec[s[i]-'a']++;
        for(int i=0; i<len_t; i++){
            if(vec[t[i]-'a'] <= 0) return false;
            vec[t[i]-'a']--;
        }
        return true;
    }
};