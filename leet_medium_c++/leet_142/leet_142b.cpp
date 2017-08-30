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
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head, *slow=head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                unordered_map<ListNode*, int> umap;
                umap[slow]=1;
                slow = slow->next;     
                while(slow != fast){
                    umap[slow]=1;
                    slow = slow->next;
                }
                while(!umap.count(head)) head = head->next;
                return head;
            }
        }
        return NULL;
    }
};

/**
 *
 *  this is a (potentially) space-optimized hash-table solution
 *
**/