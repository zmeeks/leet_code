/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root){
            left_func(root->left);
            right_func(root->right);
        }
        else return true;
        while(!left.empty() && !right.empty()){
            if(left.top() != right.top()) return false;
            left.pop();
            right.pop();
        }
        if(!left.empty() || !right.empty()) return false;
        return true;
    }
    void left_func(TreeNode* iter){
        if(iter){
            left.emplace(iter->val);
            left_func(iter->left);
            left_func(iter->right);
        }
        else left.push(NULL);
    }
    void right_func(TreeNode* iter){
        if(iter){
            right.emplace(iter->val);
            right_func(iter->right);
            right_func(iter->left);
        } 
        else right.push(NULL);
    }
    
private:
    stack<int> left;
    stack<int> right;
};