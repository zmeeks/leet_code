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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* iter1 = head;
        ListNode* iter2 = head;
        while(n--) iter2 = iter2->next;
        if(!iter2) return head->next;
        iter2 = iter2->next;
        while(iter2){
            iter1 = iter1->next;
            iter2 = iter2->next;
        }
        iter1->next = iter1->next->next;
        return head;
    }
};
