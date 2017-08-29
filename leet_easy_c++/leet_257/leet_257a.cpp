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
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root == NULL) return rtlp;
        helper_func(to_string(root->val), root);
        return rtlp;
    }
    
private:    
    void helper_func(string str, TreeNode* cur){
        if(cur->left == NULL && cur->right == NULL) rtlp.emplace_back(str);
        if(cur->left != NULL)
            helper_func(str+"->"+to_string(cur->left->val), cur->left);
        if(cur->right != NULL)
            helper_func(str+"->"+to_string(cur->right->val), cur->right);
    }
    
vector<string> rtlp;
};