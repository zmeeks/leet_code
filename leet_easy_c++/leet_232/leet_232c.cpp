class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        if(stk.empty()) stk.emplace(x);
        else{
            int top = stk.top();
            stk.pop();
            push(x);
            stk.emplace(top);
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int ret=stk.top();
        stk.pop();
        return ret;
    }
    
    /** Get the front element. */
    int peek() {
        return stk.top();
    }

    
    /** Returns whether the queue is empty. */
    bool empty() {
        return stk.empty();
    }
private:
    stack<int> stk;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */// implement more concise code