/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class NestedIterator {
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        stk.emplace(nestedList);
        iter.emplace(0);
        hN = true;   
        setNext();
    }

    int next() {
        int ret = stk.top()[iter.top()].getInteger();
        int tmp = iter.top()+1;
        iter.pop();
        iter.emplace(tmp);
        setNext();
        return ret;
    }

    bool hasNext() {
        if(hN) return true;
        else return false;
    }
    
    void setNext(){
        int tmp, i_top;
        while(!iter.empty()){
            i_top = iter.top();
            if(i_top == stk.top().size()){
                stk.pop();
                iter.pop();
            }
            else if(stk.top()[i_top].isInteger())
                return;
            else{
                stk.emplace(stk.top()[i_top].getList());
                iter.pop();
                iter.emplace(i_top+1);
                iter.emplace(0);
            }
        }
        hN = false;
    }
    
private:
    stack<vector<NestedInteger> > stk;
    stack<int> iter;
    bool hN;
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */