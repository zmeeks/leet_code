class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
       min.emplace_front(INT_MAX);
    }
    
    void push(int x) {
        val.emplace_front(x);
        if(x <= min.front()) min.emplace_front(x);
    }
    
    void pop() {
        if(val.front() == min.front()) min.pop_front();
        val.pop_front();
    }
    
    int top() {
        return val.front();
    }
    
    int getMin() {     
        return min.front();
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

// This slightly modified version of third solution-version is almost as fast as first version and a lot faster than third version