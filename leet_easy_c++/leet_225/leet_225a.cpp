class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q.emplace(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        queue<int> tmp;
        int ret;
        ret = q.front();
        q.pop();
        while(!q.empty()){
            tmp.emplace(ret);
            ret = q.front();
            q.pop();           
        }
        q = tmp;
        return ret;      
    }
    
    /** Get the top element. */
    int top() {
        queue<int> tmp;
        int ret;
        ret = q.front();
        q.pop();
        while(!q.empty()){
            tmp.emplace(ret);
            ret = q.front();
            q.pop();           
        }
        tmp.emplace(ret);
        q = tmp;
        return ret;   
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }
    
private:
    queue<int> q;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */