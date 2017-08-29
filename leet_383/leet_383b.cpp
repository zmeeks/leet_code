class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> vec(26,0);
        char buf;
        int len1 = ransomNote.size(), len2 = magazine.size();
        for(int i=0; i<len2; i++){
            buf = magazine[i];
            vec[buf-'a']++;
        }
        for(int i=0; i<len1; i++){
            buf = ransomNote[i];
            if(vec[buf-'a']>0) vec[buf-'a']--;
            else return false;
        }
        return true;
    }
};