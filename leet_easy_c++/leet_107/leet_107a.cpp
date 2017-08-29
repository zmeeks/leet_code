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
        helper_func(root, 0);
        vector<vector<int>> vecs;
        stable_sort(vec.begin(), vec.end(), [](pair<int, int> a, pair<int, int> b){ return a.second > b.second;});
        int len = vec.size();
        if(len == 0) return vecs;
        vector<int> tmp = {0};
        tmp[0] = vec[0].first;
        for(int i=1; i<len; i++){
            if(vec[i].second == vec[i-1].second) 
                tmp.emplace_back(vec[i].first);
            else{
                vecs.emplace_back(tmp);
                tmp.resize(0);
                tmp.emplace_back(vec[i].first);
            }
        }
        vecs.emplace_back(tmp);
        return vecs;
    }
    
    void helper_func(TreeNode* cur, int level){
        if(cur == NULL) return;
        vec.emplace_back((pair<int,int>){cur->val, level});
        helper_func(cur->left, level+1);
        helper_func(cur->right, level+1);
    }
    
private:    
vector<pair<int, int> > vec;
};