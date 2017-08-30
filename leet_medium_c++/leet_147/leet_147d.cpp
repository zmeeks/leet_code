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
        ListNode *j, *k, *cur = dummy, *prev = dummy;
        while(cur && cur->next){
            if(cur->next->val < cur->val){
                j = dummy;
                while(j->next && cur->next->val > j->next->val) j = j->next;
                prev = cur;
                // cur = cur->next;  code is much faster sans this line....
                k = j -> next;
                j -> next = prev -> next;
                prev -> next = prev -> next -> next;
                j -> next -> next = k;
            } else 
                cur = cur->next;
        }
        head = dummy->next;
        delete dummy;
        return head;
    }
};