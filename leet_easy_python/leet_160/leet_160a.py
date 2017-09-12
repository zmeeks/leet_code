# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def getIntersectionNode(self, headA, headB):
        if not headA or not headB: return None
        iter1 = headA
        iter2 = headB
        cnt = 0
        while cnt<3:
            if iter1 == iter2: return iter1
            iter1 = iter1.next
            iter2 = iter2.next
            if iter1 == None:
                iter1 = headB
                cnt+=1
            if iter2 == None:
                iter2 = headA
                cnt+=1        
        return None
        
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """