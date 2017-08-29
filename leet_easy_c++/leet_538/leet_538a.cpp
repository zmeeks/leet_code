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
       cBSTh(root);
       return root;
    }
private:
    void cBSTh(TreeNode* iter){
        if(!iter) return;
        cBSTh(iter->right);
        global_sum=iter->val+=global_sum;
        cBSTh(iter->left);  
    }
    int global_sum = 0; 
};
