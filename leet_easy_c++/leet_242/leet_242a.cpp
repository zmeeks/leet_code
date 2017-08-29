class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> umap;
        int len_s = s.size(), len_t = t.size();
        if(len_s != len_t) return false;
        for(int i=0; i<len_s; i++) umap[s[i]]++;
        for(int i=0; i<len_t; i++){
            if(!umap.count(t[i]) || (umap.count(t[i]) && umap[t[i]]<=0)) return false;
            umap[t[i]]--;
        }
        return true;
    }
};