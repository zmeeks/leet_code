# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def hasPathSum(self, root, sum):
        if not root: return False
        v = sum - root.val
        if not root.left and not root.right and v == 0: return True
        return self.hasPathSum(root.left, v) or self.hasPathSum(root.right, v)
        
        """
        :type root: TreeNode
        :type sum: int
        :rtype: bool
        """