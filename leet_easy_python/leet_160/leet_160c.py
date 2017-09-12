 Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def getIntersectionNode(self, headA, headB):
        if not headA or not headB: return None
        iter1 = headA
        iter2 = headB
        while True:
            if iter1 == iter2: return iter1
            iter1 = iter1.next
            iter2 = iter2.next
            if iter1 == None and iter2 == None: return None
            if iter1 == None: iter1 = headB     
            if iter2 == None: iter2 = headA
        
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """

        # this solution sans count flag appears faster than first solution, but not as fast as dictionary sol