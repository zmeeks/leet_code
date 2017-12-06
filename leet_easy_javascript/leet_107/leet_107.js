/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */

/**
 * @param {TreeNode} root
 * @return {number[][]}
 */
var levelOrderBottom = function(root) {
    level_ary = []
    lOBh(root, 0);
    return level_ary.reverse();
};

/**
 * @param {TreeNode} iter
 * @param {number} level
 * @return {void}
 */
//~ lOBh = level Order Bottom helper
var lOBh = function (iter, level){
    if(iter === null) return;
    if(level_ary.length === level) level_ary.push([]);
    level_ary[level].push(iter.val);
    lOBh(iter.left, level+1);
    lOBh(iter.right, level+1);
};

var level_ary;