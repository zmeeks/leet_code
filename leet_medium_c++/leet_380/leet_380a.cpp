class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        size = 0;
        srand (time(NULL));
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(umap.count(val)) return false;
        umap[val] = 1;
        size++;
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        auto it = umap.find(val);
        if(it == umap.end()) return false;
        umap.erase(it);
        size--;
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int r = rand()%size;
        auto it = umap.begin();
        for(int i=0; i< r; i++) it++;
        return (*it).first;
    }
private:
    int size;
    unordered_map<int, int> umap;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param_1 = obj.insert(val);
 * bool param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */