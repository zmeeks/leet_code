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
        ListNode *a=&dummy, *b=head, *c=head->next;
        while(b){
            if(b->val == val) a->next = c;
            else a=b;
            b = c;
            if(b) c = b->next;
        }
        return dummy.next;
    }
};

//correct but node* c is unnecessary 