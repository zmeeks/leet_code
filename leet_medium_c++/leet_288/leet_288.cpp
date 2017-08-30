class ValidWordAbbr {
public:
    ValidWordAbbr(vector<string> dictionary) {
        for(string s:dictionary){
            if(!words.count(s)){
                int len = s.size();
                char a = s[0];
                char z = s[len-1];
                string str = a + to_string(len) + z;
                umap[str]++;
                words[s] == 1;
            }
        }
    }
    
    bool isUnique(string word) {
        int len = word.size();
        char a = word[0];
        char z = word[len-1];
        string str = a + to_string(len) + z;
        return !umap.count(str) || (words.count(word) && umap[str] == 1);
    }
private:
    unordered_map<string, int> umap;
    unordered_map<string, int> words;
};

/**
 * Your ValidWordAbbr object will be instantiated and called as such:
 * ValidWordAbbr obj = new ValidWordAbbr(dictionary);
 * bool param_1 = obj.isUnique(word);
 */