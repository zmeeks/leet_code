class TwoSum {
public:
    /** Initialize your data structure here. */
    TwoSum() {
        
    }
    
    /** Add the number to an internal data structure.. */
    void add(int number) {
        umap[number]++;
    }
    
    /** Find if there exists any pair of numbers which sum is equal to the value. */
    bool find(int value) {
        unordered_map<int, int>::iterator it = umap.begin();
        int a, b;
        for(unordered_map<int, int>::iterator it = umap.begin(); it != umap.end(); it++){
            a = (*it).first;
            b = value - a;
            if(umap.find(b)!=umap.end() && a!=b) return true;
            if(umap.find(b)!=umap.end() && a==b && umap[a]>1) return true;
        }
        return false;
    }
private:
    unordered_map<int, int> umap;
    
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum obj = new TwoSum();
 * obj.add(number);
 * bool param_2 = obj.find(value);
 */