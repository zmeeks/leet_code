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
        int len = nums.size();
        if(len == 0) return NULL;
        if(len == 1){
            TreeNode* cur = new TreeNode(nums[0]);
            return cur;
        }
        int m = (nums.size())/2;
        TreeNode* cur = new TreeNode(nums[m]);
        vector<int> lefty(nums.begin(), nums.begin()+m);
        vector<int> righty(nums.begin()+m+1, nums.end());
        cur->left = sortedArrayToBST(lefty);
        cur->right = sortedArrayToBST(righty);
        return cur;
    }
};