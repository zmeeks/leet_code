class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
       min.push_back(INT_MAX);
    }
    
    void push(int x) {
        val.push_back(x);
        if(x <= min.back()) min.push_back(x);
    }
    
    void pop() {
        if(val.back() == min.back()) min.pop_back();
        val.pop_back();
    }
    
    int top() {
        return val.back();
    }
    
    int getMin() {     
        return min.back();
    }
private:
    list<int> val;
    list<int> min;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

// For whatever reason this STL version of my first version is the slowest yet