# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isSymmetric(self, root):
        if not root: return True
        return self.iSh(root.left, root.right)
        """
        :type root: TreeNode
        :rtype: bool
        """
        
    def iSh(self, left, right): # iSh = isSymmetric helper function
        if not left and not right: return True
        if not left or not right: return False
        if left.val != right.val: return False
        return self.iSh(left.left, right.right) and self.iSh(left.right, right.left)
        """
        :type left: TreeNode
        :type right: TreeNode
        :rtype: bool
        """
       