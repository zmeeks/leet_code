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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, int> umap;
        ListNode * fast = head;
        ListNode * slow = head;
        while(fast){
            if(fast->next){
                if(fast->next == slow || fast->next->next == slow) return true;
                fast = fast->next->next;
                slow = slow->next;
            }
            else return false;
        }
        return false;
    }
};