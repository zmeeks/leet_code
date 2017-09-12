# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def hasCycle(self, head):
        dic = dict()
        while head:
            if head in dic: return True
            dic[head] = 1
            head = head.next
        return False
        
        """
        :type head: ListNode
        :rtype: bool
        """
        