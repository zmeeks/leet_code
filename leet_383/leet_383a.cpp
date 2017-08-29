class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> umap;
        char buf;
        int len1 = ransomNote.size(), len2 = magazine.size();
        for(int i=0; i<len2; i++){
            buf = magazine[i];
            umap[buf]++;
        }
        for(int i=0; i<len1; i++){
            buf = ransomNote[i];
            if(umap.count(buf) && umap[buf]>0) umap[buf]--;
            else return false;
        }
        return true;
    }
};