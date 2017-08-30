class Trie {
public:
    /** Initialize your data structure here. */
    struct node{
        vector<node*> next;
        bool is_end;
    };
    
    Trie() {
        root.next.resize(26);
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        int x, flag, i=0, len = word.size();
        node* iter = &root;
        char buf;
        while(i<len){
            buf = word[i];
            x = buf - 'a';
            if(iter->next[x] != NULL) 
                iter = iter->next[x];
            else{
                node *dum = new node;
                dum->next.resize(26);
                dum->is_end = false;
                iter->next[x] = dum;
                iter = iter->next[x];
            }
            i++;
        }
        iter->is_end = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        int x, i = 0,len = word.size();
        node *iter = &root;
        char buf;
        while(i<len){
            buf = word[i];
            x = buf - 'a';
            if(iter->next[x] == NULL) return false;
            else iter = iter->next[x];
            i++;
        }
        if(iter->is_end == true) return true;
        else return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
       int x, i = 0,len = prefix.size();
        node *iter = &root;
        char buf;
        while(i<len){
            buf = prefix[i];
            x = buf - 'a';
            if(iter->next[x] == NULL) return false;
            else iter = iter->next[x];
            i++;
        }
        return true;
    }
private:
    node root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * bool param_2 = obj.search(word);
 * bool param_3 = obj.startsWith(prefix);
 */