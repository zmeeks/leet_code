# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def pathSum(self, root, sum):
        self.targ = sum
        self.dic = {}
        self.cnt = 0
        self.pSh(root, sum,0)
        return self.cnt
        """
        :type root: TreeNode
        :type sum: int
        :rtype: int
        """
        
    def pSh(self, iter, sum, len): #pSh = pathSum helper
        if not iter: return
        len +=1
        if iter.val == sum and (iter, len) not in self.dic:
            self.dic[(iter,len)]=1
            self.cnt+=1
        if iter.val == self.targ and (iter,1) not in self.dic:
            self.dic[(iter,1)]=1
            self.cnt+=1
        self.pSh(iter.left,sum - iter.val, len)
        self.pSh(iter.right,sum - iter.val, len)
        self.pSh(iter.left,self.targ, 0)
        self.pSh(iter.right,self.targ, 0)
        """
        :type iter: TreeNode
        :type sum: int
        :rtype: None
        """

    #note: this solution correct, but exceeds time limit