class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int len = strs.size(), cnt = 0;
        unordered_map<string, int> umap;
        vector<vector<string> > ret;
        string str;
        for(int i=0; i<len; i++){
            str = strs[i];
            sort(str.begin(), str.end()); 
            if(umap.count(str))
                ret[umap[str]].emplace_back(strs[i]);
            else{
                ret.emplace_back((vector<string>){strs[i]});
                umap[str]=cnt;
                ++cnt;
            }
        }
        return ret;
    }
};