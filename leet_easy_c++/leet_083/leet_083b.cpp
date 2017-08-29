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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * iter = head;
        while(iter){
            if(iter->next && iter->val == iter->next->val)
                    iter->next = iter->next->next;
            else
                iter = iter->next;
        }
        return head;
    }
};