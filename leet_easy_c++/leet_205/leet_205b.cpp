class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> s_vec(256,0);
        vector<int> t_vec(256,0);
        int len = s.size();
        for(int i=0; i<len; i++){
            if(s_vec[s[i]]==0 && t_vec[t[i]]==0){
                s_vec[s[i]] = t[i];
                t_vec[t[i]] = s[i];
            }
            else if(s_vec[s[i]]==0 || t_vec[t[i]]==0)
                return false;
            else if(s_vec[s[i]]!=0 && s_vec[s[i]] != t[i])
                return false;
        }
        return true;
    }
};