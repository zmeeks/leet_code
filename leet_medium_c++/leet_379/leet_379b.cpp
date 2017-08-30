class PhoneDirectory {
public:
    /** Initialize your data structure here
        @param maxNumbers - The maximum numbers that can be stored in the phone directory. */
    PhoneDirectory(int maxNumbers) {
        vec.resize(maxNumbers);
        fill(vec.begin(), vec.end(), 1);
        for(int i=0; i<maxNumbers; i++) stk.emplace(i);
    }
    
    /** Provide a number which is not assigned to anyone.
        @return - Return an available number. Return -1 if none is available. */
    int get() {
        if(stk.empty()) return -1;
        int ret = stk.top();
        *(vec.begin()+ret) = 0;
        stk.pop();
        return ret;
    }
    
    /** Check if a number is available or not. */
    bool check(int number) {
        return vec[number]==1;
    }
    
    /** Recycle or release a number. */
    void release(int number) {
        if(*(vec.begin()+number) == 0){
            *(vec.begin()+number) = 1;
            stk.emplace(number);
        }
    }

private:
    vector<int> vec;
    stack<int> stk;
};

/**
 * Your PhoneDirectory object will be instantiated and called as such:
 * PhoneDirectory obj = new PhoneDirectory(maxNumbers);
 * int param_1 = obj.get();
 * bool param_2 = obj.check(number);
 * obj.release(number);
 */