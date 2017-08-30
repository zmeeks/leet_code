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
        int len = nestedList.size();
        vector<NestedInteger> cur;
        for(int i = len-1; i>=0; i--)
            stk.emplace(nestedList[i]);
        while(!stk.empty() && !stk.top().isInteger()){
            cur = stk.top().getList();
            stk.pop();
            len = cur.size();
            for(int i = len-1; i>=0; i--)
                stk.emplace(cur[i]);
        }
    }

    int next() {
        int len, ret = stk.top().getInteger();
        vector<NestedInteger> cur;
        stk.pop();
        while(!stk.empty() && !stk.top().isInteger()){
            cur = stk.top().getList();
            stk.pop();
            len = cur.size();
            for(int i = len-1; i>=0; i--)
                stk.emplace(cur[i]);
        }
        return ret;
    }

    bool hasNext() {
        if(stk.empty()) return false;
        else return true;
    }
    
private:
    stack<NestedInteger> stk;
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */