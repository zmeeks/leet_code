# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def getIntersectionNode(self, headA, headB):
        dic = dict()
        iter1 = headA
        iter2 = headB
        while iter1:
            dic[iter1] = 1
            iter1 = iter1.next
        while iter2:
            if iter2 in dic: return iter2
            iter2 = iter2.next
        return None
        
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """
        
        #not O(1) memory (this is O(n1) memory); including bc speed is marginally faster than O(1) memory implementation (and should converge to being up to twice as fast)