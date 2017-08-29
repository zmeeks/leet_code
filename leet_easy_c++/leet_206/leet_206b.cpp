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
    ListNode* reverseList(ListNode* head) {
        ListNode* a = NULL;
        ListNode* b = head;
        ListNode* c;
        while(b){
            c = b->next;
            b->next = a;
            a = b;
            b=c;
        }
        return a;
    }
};