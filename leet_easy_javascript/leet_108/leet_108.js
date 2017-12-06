/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {number[]} nums
 * @return {TreeNode}
 */
var sortedArrayToBST = function(nums) {
    /**
     * @param {number} l  (left bound)
     * @param {number} r  (right bound)
     * @return {TreeNode}
     */
    var makeBinaryTree = function(l, r){
        if(r<l) return null;
        var m = Math.floor((l+r)/2);
        var iter = new TreeNode(nums[m]);
        iter.left = makeBinaryTree(l,m-1);
        iter.right = makeBinaryTree(m+1,r);
        return iter;
    };
    
    return makeBinaryTree(0, nums.length - 1);
};