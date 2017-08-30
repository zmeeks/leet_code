/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    BSTIterator(TreeNode *root) {
        push_left_nodes(root);
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(s.empty()) return false;
        else return true;
    }
    

    /** @return the next smallest number */
    int next() {
        TreeNode *cur = s.top();
        s.pop();
        push_left_nodes(cur->right);
        return cur->val;
    }
    

private:
    void push_left_nodes(TreeNode* cur){
        while(cur != NULL){
            s.push(cur);
            cur = cur->left;
        }
    }
    
    stack<TreeNode*> s;
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
