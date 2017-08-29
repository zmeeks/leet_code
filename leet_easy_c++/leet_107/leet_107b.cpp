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
        queue<TreeNode*> q1, q2;
        vector<vector<int>> res;
        vector<int> vec;
        if(root != NULL) q1.emplace(root);
        while(!q1.empty()){
            vec.clear();
            while(!q1.empty()){
                vec.emplace_back(q1.front()->val);
                if(q1.front()->left != NULL) q2.emplace(q1.front()->left);
                if(q1.front()->right != NULL) q2.emplace(q1.front()->right);
                q1.pop();
            }
            res.emplace_back(vec);
            if(q2.empty()) break;
            vec.clear();
            while(!q2.empty()){
                vec.emplace_back(q2.front()->val);
                if(q2.front()->left != NULL) q1.emplace(q2.front()->left);
                if(q2.front()->right != NULL) q1.emplace(q2.front()->right); 
                q2.pop();
            } 
            res.emplace_back(vec);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};