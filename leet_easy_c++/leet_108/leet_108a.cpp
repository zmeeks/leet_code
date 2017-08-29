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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper_func(nums, 0, nums.size()-1);
    }
    
    TreeNode* helper_func(vector<int>& nums, int l, int r){
        if(r<l) return NULL;
        int m = (l+r)/2;
        TreeNode* cur = new TreeNode(nums[m]);
        cur->left = helper_func(nums, l, m-1);
        cur->right = helper_func(nums, m+1, r);
        return cur;
    }
};