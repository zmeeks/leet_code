class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s_map;
        unordered_map<char, char> t_map;
        int len = s.size();
        for(int i=0; i<len; i++){
            if(!s_map.count(s[i]) && !t_map.count(t[i])){
                s_map[s[i]] = t[i];
                t_map[t[i]] = s[i];
            }
            else if(!s_map.count(s[i]) || !t_map.count(t[i]))
                return false;
            else if(s_map.count(s[i]) && s_map[s[i]] != t[i])
                return false;
        }
        return true;
    }
};