class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        size = 0;
        //srand (time(NULL));  uncomment out for better randomness. as commented out --> faster run time
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(umap.count(val)) return false;
        umap[val] = size;
        vec.emplace_back(val);
        size++;
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        auto it = umap.find(val);
        if(it == umap.end()) return false;
        int tmp = (*it).second;
        size--;
        vec[tmp] = vec[size];
        umap[vec[size]] = tmp;
        umap.erase(it);
        vec.pop_back();
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int r = rand()%size;
        return vec[r];
    }
private:
    int size;
    vector<int> vec;
    unordered_map<int, int> umap;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param_1 = obj.insert(val);
 * bool param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */