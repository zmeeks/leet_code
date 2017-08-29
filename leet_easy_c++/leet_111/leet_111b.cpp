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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        else if(!root->left && !root->right) return 1;
        else if(root->left && root->right) return min(minDepth(root->right), minDepth(root->left)) + 1;
        else return minDepth(root->right) + minDepth(root->left) + 1;
    }
};