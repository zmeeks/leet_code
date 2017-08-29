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
        vector<TreeNode*> vec;
        int front, back, level = 1;
        bool flag;
        vec.emplace_back(root);
        while(true){
            flag = false;
            for(int i=0; i<level ; i++){
                if(vec[i]){
                    vec.emplace_back(vec[i]->left);
                    vec.emplace_back(vec[i]->right);
                    flag = true;
                }
                else{
                    vec.push_back(NULL);
                    vec.push_back(NULL);
                }
            }
            vec.erase(vec.begin(),vec.begin()+level);
            if(flag == false) return true;
            level*=2;
            for(front=0, back=level-1; front<back ; front++, back--){
                if(vec[front] == NULL && vec[back] != NULL) return false;
                if(vec[front] != NULL && vec[back] == NULL) return false;
                if(vec[front] && vec[back] && vec[front]->val != vec[back]->val) return false;
            }
        }
        return true;
    }
};

// still exceeds memory limit, but is now reduced, at least big-O wise...