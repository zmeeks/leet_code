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
        ListNode *j, *k, *prev = &dummy;
        while(prev->next){
            if(prev->next->val < prev->val){
                j = &dummy;
                while(j->next && prev->next->val > j->next->val) j = j->next;
                k = j->next;
                j->next = prev->next;
                prev->next = prev->next->next;
                j->next->next = k;                
            } 
            else prev = prev->next;
        }
        return dummy.next;
    }
};

//this just version e sans dynamic memory alloc -- same runtime