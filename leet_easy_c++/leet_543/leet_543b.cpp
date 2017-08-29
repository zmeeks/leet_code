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
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        leg_depth(root);
        return diam;
    }
    
    int leg_depth(TreeNode* iter){
        if(!iter) return 0;
        int left = leg_depth(iter->left), right = leg_depth(iter->right);
        diam = max(diam, left + right);
        return 1 + max(left, right);
    }
private:
    int diam; //instantiated to zero;
};

//this solution 6ms (amongst fastest solutions)