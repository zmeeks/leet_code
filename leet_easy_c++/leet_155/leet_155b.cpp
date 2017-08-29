class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
       min.push(INT_MAX);
    }
    
    void push(int x) {
        val.push(x);
        if(x <= min.top()) min.push(x);
    }
    
    void pop() {
        if(val.top() == min.top()) min.pop();
        val.pop();
    }
    
    int top() {
        return val.top();
    }
    
    int getMin() {     
        return min.top();
    }
private:
    stack<int> val;
    stack<int> min;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

// NOTE: this not nearly as fast as the first implemented one, but it is MUCH simpler.