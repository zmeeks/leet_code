# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def mergeTwoLists(self, l1, l2):
        head = ListNode(0)
        iter = head
        while l1 and l2:
            if l1.val <= l2.val:
                iter.next = l1
                l1 = l1.next
            else:
                iter.next = l2
                l2 = l2.next
            iter = iter.next 
        iter.next = l1 or l2      
        return head.next        
        
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
         