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
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        bool l, r;
        if(!(root->right) && !(root->left) &&  sum - (root->val)==0) return true;
        l = hasPathSum(root->left, sum - (root->val));
        r = hasPathSum(root->right, sum - (root->val));
        return max(l,r);
    }
};