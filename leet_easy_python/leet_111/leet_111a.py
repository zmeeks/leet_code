# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def minDepth(self, root):
        if not root: return 0
        if root.left and root.right: return min(self.minDepth(root.left), self.minDepth(root.right)) + 1
        elif root.left: return self.minDepth(root.left) + 1
        else: return self.minDepth(root.right) + 1
        
        """
        :type root: TreeNode
        :rtype: int
        """
        