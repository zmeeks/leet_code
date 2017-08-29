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
        queue<TreeNode*> q;
        q.push(root);
        if(!root) return 0; if(root->left == NULL && root->right == NULL) return 1;
        int next, cnt = 0, level=1, flag = 1;
        while(flag == 1){
            next=0;
            for(int i=0; flag == 1 && i< level; i++){
                if(q.front() != NULL && q.front()->left != NULL){
                    q.push(q.front()->left);
                    next++;
                }
                if(q.front() != NULL && q.front()->right != NULL){
                    q.push(q.front()->right);
                    next++;
                }
                if(q.front() != NULL && q.front()->right == NULL && q.front()->left == NULL){
                    flag = 0;
                }
                q.pop();
            }
            level = next;
            cnt++;
        }
        return cnt;
    }
};