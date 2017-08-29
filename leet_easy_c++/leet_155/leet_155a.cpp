class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        val_tail.next = NULL;
        min_tail.next = NULL;
        min_tail.val = INT_MAX;       
    }
    
    ~MinStack(){
        while(min_tail.next) this->pop();
    }
    
    struct mylist{
        int val;
        mylist * next;
    };
    
    void push(int x) {
            if(x<=min_tail.val){
                min_tail.val = x;
                mylist *m = new mylist;
                m->next = min_tail.next;
                m->val = x;
                min_tail.next = m;
                mylist *v = new mylist;
                v->next = val_tail.next;
                v->val = x;
                val_tail.next = v;
            }
            else{
                mylist *v = new mylist;
                v->next = val_tail.next;
                v->val = x;
                val_tail.next = v;
            }
    }
    
    void pop() {
        if(val_tail.next && min_tail.val == val_tail.next->val){
            mylist *tmp1 = val_tail.next;
            val_tail.next = val_tail.next->next;
            delete tmp1;
            mylist *tmp2 = min_tail.next;
            if(min_tail.next){
                min_tail.next = min_tail.next->next;
                if(min_tail.next)
                    min_tail.val = min_tail.next->val;
                else
                    min_tail.val = INT_MAX;
            }
            else
                min_tail.val = INT_MAX;
            delete tmp2;
        }
        else if(val_tail.next){
            mylist *tmp3 = val_tail.next;
            val_tail.next = val_tail.next->next;
            delete tmp3;
        }
    }
    
    int top() {
        return val_tail.next->val;
    }
    
    int getMin() {     
        return min_tail.val;
    }
private:
    mylist val_tail;
    mylist min_tail;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */