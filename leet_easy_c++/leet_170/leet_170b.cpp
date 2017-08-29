class TwoSum {
public:
    /** Initialize your data structure here. */
    TwoSum() {
        
    }
    
    /** Add the number to an internal data structure.. */
    void add(int number) {
        if(umap.count(number) == 0) umap[number] = 1;
        else umap[number] = umap[number] + 1;    
    }
    
    /** Find if there exists any pair of numbers which sum is equal to the value. */
    bool find(int value) {
        unordered_map<int, int>::iterator it = umap.begin();
        int a, b;
        for(unordered_map<int, int>::iterator it = umap.begin(); it != umap.end(); it++){
            a = (*it).first;
            b = value - a;
            if(umap.count(b) && (a!=b || (a==b && (*it).second>1) ) ) return true;
        }
        return false;
    }
private:
    unordered_map<int, int> umap;
    
};
// WAY WAY FASTER