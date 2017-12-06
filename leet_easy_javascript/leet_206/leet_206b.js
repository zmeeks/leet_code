/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

var prev = null;

/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var reverseList = function(head) {
    if(head === null) return null;
    if(head.next === null){
        head.next = prev;
        prev = null;
        return head;
    } 
    var next = head.next;
    head.next = prev;
    prev = head;
    return reverseList(next);
};