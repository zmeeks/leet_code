# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def minDepth(self, root):
        if not root: return 0
        cnt = 0
        q = [[root,1]] 
        while q:
            tmp = q.pop(0)
            if tmp[0].left == None and tmp[0].right == None: 
                return tmp[1]
            else:
                if tmp[0].left: q.append([tmp[0].left,tmp[1]+1])
                if tmp[0].right: q.append([tmp[0].right,tmp[1]+1])
        
        """
        :type root: TreeNode
        :rtype: int
        """
        