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
        sz=0;
        level_order(root, 0);
        reverse(res.begin(), res.end());
        return res;
    }
    
    void level_order(TreeNode* iter, int level){
        if(!iter) return;
        if(iter && sz<=level){
            res.emplace_back(vector<int>{}); 
            sz++;
        } 
        res[level].emplace_back(iter->val);
        level_order(iter->left, level+1);
        level_order(iter->right, level+1);
    }
    
private:
    vector<vector<int>> res;
    int sz;
};