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
    int maxDepth(TreeNode* root) {
        int ans = 0;
        if(!root) return 0;
        ans = helper_func(root, 0);
        return ans;
    }
    
    int helper_func(TreeNode* iter, int depth){
        int l=0, r=0;
        if(iter->left)
            l= helper_func(iter->left, depth+1);
        if(iter->right)
            r= helper_func(iter->right, depth+1);
        return max(depth+1, max(r,l));
    }
};