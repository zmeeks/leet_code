class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string, int> umap;
        for(auto w:wordDict) umap[w] = 1;
        int len = s.size();
        vector<int> vec(len, 0);
        vec[0] = 1;
        for(int i=0; i<len;i++){
            for(int j=0; j<=i;j++){
                if(vec[j] && umap.count(s.substr(j, i - j + 1))){
                    if(i == len - 1) return true;
                    vec[i+1] = 1;
                }
            }
        }
        return false;
    }
};

// this solution is 6ms. this solution uses classic dynamic programming