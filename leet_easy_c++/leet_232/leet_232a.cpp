class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        stk.emplace(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int peeker;
        stack<int> tmp;
        while(!stk.empty()){
            tmp.emplace(stk.top());
            stk.pop();
        }
        peeker = tmp.top();
        tmp.pop();
        while(!tmp.empty()){
            stk.emplace(tmp.top());
            tmp.pop();
        }
        return peeker;
    }
    
    /** Get the front element. */
    int peek() {
        int peeker;
        stack<int> tmp;
        while(!stk.empty()){
            tmp.emplace(stk.top());
            stk.pop();
        }
        peeker = tmp.top();
        while(!tmp.empty()){
            stk.emplace(tmp.top());
            tmp.pop();
        }
        return peeker;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(stk.empty()) return true;
        else return false;
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
 */