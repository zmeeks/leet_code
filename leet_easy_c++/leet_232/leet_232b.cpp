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
        peek_pop_helper1();
        int ret=tmp.top();
        tmp.pop();
        peek_pop_helper2();
        return ret;
    }
    
    /** Get the front element. */
    int peek() {
        peek_pop_helper1();
        int ret=tmp.top();
        peek_pop_helper2();
        return ret;
    }
    
    void peek_pop_helper1(){
        while(!stk.empty()){
            tmp.emplace(stk.top());
            stk.pop();
        }
    }
     void peek_pop_helper2(){
        while(!tmp.empty()){
            stk.emplace(tmp.top());
            tmp.pop();
        }
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return stk.empty();
    }
private:
    stack<int> stk;
    stack<int> tmp;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */// implement more concise code