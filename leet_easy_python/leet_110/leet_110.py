# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isBalanced(self, root):
        self.flag = True
        self.iBh(root)
        return self.flag
        """
        :type root: TreeNode
        :rtype: bool
        """
        
    def iBh(self, iter): #iBh = isBalanced helper
        if not iter or self.flag == False: return 0
        l = self.iBh(iter.left) + 1
        r = self.iBh(iter.right) + 1
        if abs(l-r) > 1: self.flag = False
        return max(l,r)
        """
        :type iter: TreeNode
        :rtype: int
        """