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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        stack<ListNode*> stkA;
        stack<ListNode*> stkB;
        if(headA == NULL || headB == NULL) return NULL;
        while(headA){
            stkA.emplace(headA);
            headA = headA->next;
        }
        while(headB){
            stkB.emplace(headB);
            headB = headB->next;
        }
        ListNode *prev = NULL;
        while(!stkA.empty() && !stkB.empty() && stkA.top() == stkB.top()){
            prev = stkA.top();
            stkA.pop();
            stkB.pop();
        }
        return prev;
    }
};