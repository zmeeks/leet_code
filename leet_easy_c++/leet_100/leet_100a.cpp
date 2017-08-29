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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if((p==NULL & q!=NULL) || (p!=NULL && q==NULL)) return false;
        if(p==NULL && q==NULL) return true;
        if(p->val != q->val) return false;
        bool is_same_l=true, is_same_r=true;
        if(p->left || q->left)
            is_same_l = isSameTree(p->left, q->left);
        if(p->right || q->right)
            is_same_r = isSameTree(p->right, q->right);
        return is_same_l && is_same_r;    
    }
};