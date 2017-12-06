/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */

/**
 * @param {TreeNode} root
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {TreeNode}
 */
var lowestCommonAncestor = function(root, p, q) {
    if(root === null) return null;
    if(root === p || root === q)
        return root;
    else{
        var _left = lowestCommonAncestor(root.left, p, q); 
        var _right = lowestCommonAncestor(root.right, p, q);
        if(_left !== null && _right !== null) return root;      
        else return _left || _right;
    }  
};