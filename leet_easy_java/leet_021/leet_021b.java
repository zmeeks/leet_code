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
        ListNode head;
        if(l1.val <= l2.val){
            head = l1;
            l1 = l1.next;
        }else{
            head = l2;
            l2 = l2.next;
        }
        ListNode iter = head;
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
                return head;
            }
            else if(l2 != null){
                iter.next = l2;
                return head;
            }
            iter = iter.next;
        }
        return head;
    }
}