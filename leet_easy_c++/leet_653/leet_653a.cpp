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
        return fth(root,k);
    }
private:
    bool fth(TreeNode* iter, int k){
        if(!iter) return false;
        if(umap.count(k -iter->val)) return true;
        umap[iter->val]++;
        return fth(iter->left, k) || fth(iter->right, k);
    }
    unordered_map<int, int> umap;
};