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
    TreeNode* convertBST(TreeNode* root) {
        if(!root) return root;
        convertBST(root->right);
        global_sum=root->val+=global_sum;
        convertBST(root->left); 
        return root;
    }
    int global_sum = 0; 
};
