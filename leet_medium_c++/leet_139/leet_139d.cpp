class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        sort(wordDict.begin(), wordDict.end());
        str = s;
        s_len = s.size();
        vec.resize(s_len);
        fill(vec.begin(), vec.end(), 0);
        wd_len = wordDict.size();
        return wbh(wordDict, 0, 0);
    }
    
private:    
    bool wbh(vector<string>& wordDict, int pos, int j){
        int w_len, i=0, tmp = pos;
        bool ret;
        if(vec[pos] != 0) return (vec[pos] == 1 ? true : false);
        while(j < wd_len && wordDict[j][0]<str[pos]) j++;
        if(j==wd_len || wordDict[j][0]>str[pos]) return false;
        w_len = wordDict[j].size();
        while(pos < s_len && i < w_len && wordDict[j][i]==str[pos]){
            pos++;
            i++;
        }
        if(i==w_len && pos == s_len) return true;
        if(i==w_len){
            ret = wbh(wordDict, pos, 0) || wbh(wordDict, tmp, j+1);
            vec[tmp] = (ret == true ? 1 : 2); 
            return ret;
        } 
        else return wbh(wordDict, tmp, j+1);       
    }

    string str;
    int s_len;
    int wd_len;
    vector<int> vec;
};
 
 // This solution uses backtracking AND memoization.  It is solution version a, but with added memoization. It is even faster than previous accepted solution! (3ms vs 9ms)