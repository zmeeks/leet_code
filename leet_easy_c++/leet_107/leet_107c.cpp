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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q1;
        vector<vector<int>> res;
        vector<int> vec;
        if(root == NULL) return res;
        q1.emplace(root);
        q1.push(NULL);
        while(true){
            if(q1.front()==NULL){
                q1.pop();
                res.emplace_back(vec);
                vec.clear();
                if(q1.empty()) break;
                q1.push(NULL);
            }
            else{
                vec.emplace_back(q1.front()->val);
                if(q1.front()->left != NULL) q1.emplace(q1.front()->left);
                if(q1.front()->right != NULL) q1.emplace(q1.front()->right);
                q1.pop();
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};