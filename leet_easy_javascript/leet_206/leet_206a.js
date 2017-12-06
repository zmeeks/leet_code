/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var reverseList = function(head) {
    return rLh(null, head);
};

/**
 * @param {ListNode} prev
 * @param {ListNode} cur
 * @return {ListNode}
 */
var rLh = function(prev, cur) {
    if(cur === null) return prev;
    var next = cur.next;
    cur.next = prev;
    return rLh(cur, next);
};