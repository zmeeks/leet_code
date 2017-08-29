class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> umap;
        int len_s=s.size(), len_t=t.size();
        for(int i=0; i<len_s; i++) umap[s[i]]++;
        for(int i=0; i<len_t; i++) umap[t[i]]++;
        for(auto it=umap.begin(); it != umap.end(); it++) if( ((*it).second)%2 == 1 ) return (*it).first;                         
    }
};