# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def deleteDuplicates(self, head):
        if not head: return head
        iter = head
        while iter.next:
            if iter.val == iter.next.val:
                iter.next = iter.next.next
            else:
                iter = iter.next
        return head
        
        """
        :type head: ListNode
        :rtype: ListNode
        """
        