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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *c, *a = head, *b = a->next; 
        head = b;
        while (true) {
            a->next = b->next;
            b->next = a; 
            if(!a || (a && !a->next) || (a && a->next && !a->next->next)) break;
            c = a->next;
            a->next = a->next->next;
            a= c;
            b = c->next; 
        }
        return head;
    }
};