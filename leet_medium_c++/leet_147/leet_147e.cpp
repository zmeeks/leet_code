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
        ListNode *j, *k, *prev = dummy;
        while(prev->next){
            if(prev->next->val < prev->val){
                j = dummy;
                while(j->next && prev->next->val > j->next->val) j = j->next;
                k = j->next;
                j->next = prev->next;
                prev->next = prev->next->next;
                j->next->next = k;                
            } 
            else prev = prev->next;
        }
        head = dummy->next;
        delete dummy;
        return head;
    }
};

// same run time as version d.  version d and e much faster than version c.  not entirely sure why.  same number of operations by all appearances.
// in fact pointer traversals appear less in version c.  however ops are being done on mostly two pointers here, versus 3 in version c.  
// I assume that this discrepency is due to compiler optimization OR the cost of certain operations is more expensive that I assume.