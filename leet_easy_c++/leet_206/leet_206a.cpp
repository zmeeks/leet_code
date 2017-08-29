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
        ListNode* iter = head;
        stack<int> stk;
        while(iter){
            stk.emplace(iter->val);
            iter = iter->next;
        }
        iter = head;
        while(iter){
            iter->val = stk.top();
            stk.pop();
            iter = iter->next;
        }
        return head;
    }
};