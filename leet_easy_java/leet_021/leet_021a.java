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
        if(l1==null || l2==null) return (l1 == null ? l2 : l1);
        ListNode dummy = new ListNode(0);
        ListNode iter = dummy;
        while(l1 != null || l2 != null){
            if(l1 != null && l2 != null){
                if(l1.val <= l2.val){
                    iter.next = l1;
                    l1 = l1.next;
                }else{
                    iter.next = l2;
                    l2 = l2.next;
                }
            }
            else if(l1 != null){
                iter.next = l1;
                return dummy.next;
            }
            else if(l2 != null){
                iter.next = l2;
                return dummy.next;
            }
            iter = iter.next;
        }
        return dummy.next;
    }
}