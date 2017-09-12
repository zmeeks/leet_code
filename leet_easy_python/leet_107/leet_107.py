# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def levelOrderBottom(self, root):
        self.vec = []
        if not root: return self.vec
        self.lOBh(root, 0)
        return self.vec[::-1]
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
    
    def lOBh(self, iter, level): # lOBh = level Order Bottom helper function
        if not iter: return
        if level>=len(self.vec): self.vec.append([])
        self.vec[level].append(iter.val)
        self.lOBh(iter.left, level+1)
        self.lOBh(iter.right, level+1)
        """
        :type iter: TreeNode
        :type level: int
        :rtype: void
        """
        