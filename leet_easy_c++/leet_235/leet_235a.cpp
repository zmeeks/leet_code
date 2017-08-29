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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        TreeNode* lefty = lowestCommonAncestor(root->left, p, q);
        TreeNode* righty = lowestCommonAncestor(root->right, p, q);
        if((root == p || root == q) && righty) return root;
        if((root == p || root == q) && lefty) return root;
        if(righty && lefty) return root;
        if(root == p || root == q) return root;
        if(lefty == NULL)
            return righty;
        else
            return lefty;
    }
};