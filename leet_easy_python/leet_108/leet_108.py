# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def sortedArrayToBST(self, nums):
        self.vec = nums
        if not nums: return None
        head = TreeNode(0)
        self.sATBSTh(head, 0, len(nums)-1)
        return head
        """
        :type nums: List[int]
        :rtype: TreeNode
        """
    
    def sATBSTh(self, iter, n, m): # sATBSTh = sortedArrayToBST helper function
        x = (n+m)//2 
        iter.val = self.vec[x]
        if x-1 >=n:
            left = TreeNode(0)
            iter.left = left
            self.sATBSTh(left, n, x-1)
        if x+1 <= m:
            right = TreeNode(0)
            iter.right = right
            self.sATBSTh(right, x+1, m)
        """
        :type iter: TreeNode
        :type n: int
        :type m: int
        :rtype: void
        """
        