# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isSymmetric(self, root):
        if not root: return True
        left = [root.left]
        right = [root.right]
        while left and right:
            l = left.pop()
            r = right.pop()
            if not l and not r: pass #do nothing         
            elif not l or not r: return False
            elif l.val != r.val: return False
            else:
                left.append(l.left)
                left.append(l.right)
                right.append(r.right)
                right.append(r.left)
        return True
        
        """
        :type root: TreeNode
        :rtype: bool
        """
        