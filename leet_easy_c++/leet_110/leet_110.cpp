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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        if(tree_depth(root->left) > tree_depth(root->right) + 1 || tree_depth(root->left) + 1 < tree_depth(root->right)) 
            return false;
        else{
            return isBalanced(root->right) && isBalanced(root->left);
        }
    }
    
    int tree_depth(TreeNode* cur){
        if(cur == NULL) return 0;
        if(cur->left == NULL && cur->right == NULL) return 1;
        if(cur->right != NULL && cur->left != NULL) return max(tree_depth(cur->left), tree_depth(cur->right)) + 1;
        if(cur->right != NULL) return tree_depth(cur->right) + 1;
        if(cur->left != NULL) return tree_depth(cur->left) + 1;
    }
};