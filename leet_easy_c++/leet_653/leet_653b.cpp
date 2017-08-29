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
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        if(umap.count(k - root->val)) return true;
        umap[root->val]++;
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
private:
    unordered_map<int, int> umap;
};