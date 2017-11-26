/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if(l1 == null || l2 == null) return (l1==null ? l2 : l1);
        boolean l1_is_less;
        if(l1_is_less = (l1.val <= l2.val)) l1.next = mergeTwoLists(l1.next, l2);
        else l2.next = mergeTwoLists(l1, l2.next);
        return (l1_is_less ? l1 : l2);
    }
}