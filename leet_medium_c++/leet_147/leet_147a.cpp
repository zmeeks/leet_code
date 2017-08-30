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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *dummy = new ListNode(INT_MIN);
        dummy->next = head;
        ListNode *j, *i = head, *prev = dummy;
        while(i){
            j=dummy;
            if(i->val < prev->val){
                while(j->next && j->next != i){
                    if(i->val < j->next->val){
                        prev->next = i->next;
                        i->next = j->next;
                        j->next = i;
                        break;
                    }
                    else{
                        j = j->next;
                    }
                }
            }
            prev = i;
            i = i->next;
        }
        head = dummy->next;
        delete dummy;
        return head;
    }
};
