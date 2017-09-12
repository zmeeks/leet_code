# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def hasPathSum(self, root, sum):
        if not root: return False
        stk_r = [root]
        stk_s = [sum - root.val]
        while stk_r:
            iter = stk_r.pop()
            cur = stk_s.pop()
            if not iter.right and not iter.left and cur==0: 
                return True
            if iter.left: 
                stk_r.append(iter.left)
                stk_s.append(cur - iter.left.val)
            if iter.right: 
                stk_r.append(iter.right)
                stk_s.append(cur - iter.right.val)
        return False

        """
        :type root: TreeNode
        :type sum: int
        :rtype: bool
        """
        