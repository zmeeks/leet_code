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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        queue<TreeNode*> q_l;
        queue<TreeNode*> q_r;
        q_l.push(root->left);
        q_r.push(root->right);
        while(!q_l.empty() || !q_r.empty()){
            if(q_l.empty() || q_r.empty()) return false;
            if((q_l.front() == NULL && q_r.front() != NULL) || (q_l.front() != NULL && q_r.front() == NULL)) return false;
            if(q_l.front() != NULL && q_l.front()->val != q_r.front()->val) return false;
            if(q_l.front() != NULL){
                q_l.push(q_l.front()->left);
                q_l.push(q_l.front()->right);
                q_r.push(q_r.front()->right);
                q_r.push(q_r.front()->left);
            }
            q_l.pop();
            q_r.pop();
        }
        return true;
    }
};

// accepted