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
        ListNode dummy(INT_MIN);
        dummy.next = head;
        ListNode *j, *cur = head, *prev = &dummy;
        while(cur){
            if(cur->val < prev->val){
                j = &dummy;
                while(j->next && cur->val > j->next->val) j = j->next;
                prev->next = cur->next;
                cur->next = j->next;
                j->next = cur;
            } 
            prev = cur;
            cur = cur->next;
        }
        return dummy.next;
    }
};

//this just version c sans dynamic memory alloc -- same runtime