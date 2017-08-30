class PhoneDirectory {
public:
    /** Initialize your data structure here
        @param maxNumbers - The maximum numbers that can be stored in the phone directory. */
    PhoneDirectory(int maxNumbers) {
        for(int i=0; i<maxNumbers; i++) umap[i] = 1;
    }
    
    /** Provide a number which is not assigned to anyone.
        @return - Return an available number. Return -1 if none is available. */
    int get() {
        auto it = umap.begin();
        if(it == umap.end()) return -1;
        int ret = (*it).first;
        umap.erase(it);
        return ret;
    }
    
    /** Check if a number is available or not. */
    bool check(int number) {
        return umap.count(number);
    }
    
    /** Recycle or release a number. */
    void release(int number) {
        umap[number] = 1;
    }

private:
    unordered_map<int, int> umap;
};

/**
 * Your PhoneDirectory object will be instantiated and called as such:
 * PhoneDirectory obj = new PhoneDirectory(maxNumbers);
 * int param_1 = obj.get();
 * bool param_2 = obj.check(number);
 * obj.release(number);
 */