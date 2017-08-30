class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        sort(wordDict.begin(), wordDict.end());
        str = s;
        s_len = s.size();
        wd_len = wordDict.size();
        return wbh(wordDict, 0, 0);
    }
    
private:    
    bool wbh(vector<string>& wordDict, int pos, int j){
        int w_len, i=0, tmp = pos;
        while(j < wd_len && wordDict[j][0]<str[pos]) j++;
        if(j==wd_len || wordDict[j][0]>str[pos]) return false;
        w_len = wordDict[j].size();
        while(pos < s_len && i < w_len && wordDict[j][i]==str[pos]){
            pos++;
            i++;
        }
        if(i==w_len && pos == s_len) return true;
        if(i==w_len) return wbh(wordDict, pos, 0) || wbh(wordDict, tmp, j+1);
        else return wbh(wordDict, tmp, j+1);       
    }

    string str;
    int s_len;
    int wd_len;
};
 
 // This solution uses backtracking.  The runtime for this is too high //