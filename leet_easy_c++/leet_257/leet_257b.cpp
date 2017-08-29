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
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root) return vec;
        else if(vec.size()==0) vec = {""};
        int sz = vec.size()-1;
        vec[sz]+= to_string(root->val); 
        if(root->left || root->right) vec[sz]+="->";
        if(root->left && root->right){           
            string str = vec[sz];
            binaryTreePaths(root->left);
            vec.emplace_back(str);
            binaryTreePaths(root->right);
        }
        else if(root->left) binaryTreePaths(root->left);        
        else if(root->right) binaryTreePaths(root->right);
        return vec;
    }
    vector<string> vec;
};