/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        ListNode dummy(0);
        dummy.next = head;
        ListNode *a=&dummy, *b=head;
        while(b){
            if(b->val == val) a->next = b->next;
            else a=b;
            b = b->next;
        }
        return dummy.next;
    }
};