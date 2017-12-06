/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */

 var which_node;
 
/**
 * @param {TreeNode} root
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {TreeNode}
 */
var lowestCommonAncestor = function(root, p, q) {
    which_node = null;
    lCAh(root, p, q);
    return which_node;
};

/**
 * @param {TreeNode} root
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {TreeNode}
 */
//~ lCAh = lowest Common Ancestor helper
var lCAh = function(root, p, q) {
    if(root === null || which_node !== null) return null;
    var _left = lCAh(root.left, p, q); 
    var _right = lCAh(root.right, p, q);
    if(root === p){
        if( _left === q || _right === q) which_node = root;
        return root;
    }else if(root === q){
        if( _left === p || _right === p) which_node = root;
        return root;
    }else{
        if(_left !== null && _right !== null){
            which_node = root;
            return root;
        } 
        return _left || _right;
    }  
};