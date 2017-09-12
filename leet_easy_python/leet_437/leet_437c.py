# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def pathSum(self, root, sum):
        if not root: return 0
        return self.pSh(root, sum) + self.pathSum(root.left, sum) + self.pathSum(root.right, sum) 
        """
        :type root: TreeNode
        :type sum: int
        :rtype: int
        """
        
    def pSh(self, iter, sum): #pSh = pathSum helper
        if not iter: return 0
        if iter.val == sum: return self.pSh(iter.left, 0) + self.pSh(iter.right, 0) + 1
        else: return self.pSh(iter.left, sum - iter.val) + self.pSh(iter.right, sum - iter.val) 
        """
        :type iter: TreeNode
        :type sum: int
        :rtype: int
        """
        