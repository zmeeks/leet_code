class Trie {
public:
    /** Initialize your data structure here. */
    Trie() { }
    
    struct node {
        char val;
        vector<node*> nexts;
    };
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        if(word == "") return;
        int r_len = root.size(), w_len = word.size(), found = 0;
        char f = word[0];
        for(int i=0; i<r_len; i++){
            if(root[i]->val == f){
                insert_helper(word+"*", 1, w_len+1, root[i]);
                found = 1;
            } 
        }
        if(found == 0){
            node* k = new node;
            k->val = f;
            root.emplace_back(k);
            insert_helper(word + "*", 1, w_len+1, root[r_len]);
        }
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
        int pos = 0, w_len = word.size(), r_len = root.size();
        char c = word[0];
        for(int i=0; i<r_len; i++){
            if(root[i]->val == c)
                return search_helper(word+"*", 1, w_len+1, root[i]);
        }
        return false;
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
        int pos = 0, p_len = prefix.size(), r_len = root.size();
        char c = prefix[0];
        for(int i=0; i<r_len; i++){
            if(root[i]->val == c){
                return search_helper(prefix, 1, p_len, root[i]);
            } 
        }
        return false;
    }
    
private:
    vector<node*> root;  
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * bool param_2 = obj.search(word);
 * bool param_3 = obj.startsWith(prefix);
 */