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
        dobth(root);
        return diam;
    }
    void dobth(TreeNode* iter){
        if(!iter) return;
        diam = max(diam, leg_depth(iter->left) + leg_depth(iter->right));
        dobth(iter->left);
        dobth(iter->right);
    }
    int leg_depth(TreeNode* iter){
        if(!iter) return 0;
        else return 1 + max(leg_depth(iter->left), leg_depth(iter->right));
    }
private:
    int diam; //instantiated to zero;
};

// this solution was my intuitive first solution. It is correct.  After (and while) writing this out I noticed that dobth() was redundant. 