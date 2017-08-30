class Trie {
public:
    /** Initialize your data structure here. */
    Trie() { 
        root = new node;
    }
    
    struct node {
        char val;
        vector<node*> nexts;
    };
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        if(word == "") return;
        int len = word.size(), found = 0;
        insert_helper(word + "*", 0, len+1, root);
    }
    
    void insert_helper(string word, int pos, int len, node* cur){
        if(pos == len) return;
        int found = 0, c_len = cur->nexts.size();
        char x = word[pos];
        for(int i=0; i<c_len; i++){
            if(cur->nexts[i]->val == x){
                insert_helper(word, pos+1, len, cur->nexts[i]);
                found = 1;
            } 
        }
        if(found == 0){
            node* k = new node;
            k->val = x;
            cur->nexts.emplace_back(k);
            insert_helper(word, pos+1, len, cur->nexts[c_len]);
        }
    }
    
    /** Returns true if the word is in the trie. */
    bool search(string word) {
        if(word == "") return true;
        int len = word.size();
        return search_helper(word+"*", 0, len+1, root);
    }
    
    bool search_helper(string word, int pos, int len, node * cur){
        if(pos == len) return true;
        char c = word[pos];
        int found = 0, c_len = cur->nexts.size();
        for(int i=0; i<c_len; i++){
            if(cur->nexts[i]->val == c)
                return search_helper(word, pos+1, len, cur->nexts[i]);
        }
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        if(prefix == "") return true;
        int len = prefix.size();
        return search_helper(prefix, 0, len, root);
    }
    
private:
    node* root;  
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * bool param_2 = obj.search(word);
 * bool param_3 = obj.startsWith(prefix);
 */

// considerably simpler and slightly faster solution