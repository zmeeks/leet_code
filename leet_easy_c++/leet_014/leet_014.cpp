class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size(); 
        if(strs.size() == 0)    // this line needed for corner case when no vector of strings passed in
            return "";
        int max_len = strs[0].size();
        for(int i=1; i<len; i++) max_len = min(max_len, (int)strs[i].size());
        for(int i=0; i<max_len; i++){
            char tmp = strs[0][i];
            for(int j=0; j<len; j++){
                if(strs[j][i] != tmp){
                    return strs[j].substr(0, i);
                }
            }
        }
        return strs[0].substr(0, max_len);       
    }
};