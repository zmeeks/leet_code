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
        ListNode *ptrA = headA;
        ListNode *ptrB = headB;
        if(headA == NULL || headB == NULL) return NULL;
        int cnt = 0;
        while(cnt < 3){
            if(ptrA == ptrB) return ptrA;
            ptrA = ptrA->next;
            ptrB = ptrB->next;
            if(ptrA == NULL){
                ptrA = headB;
                cnt++;
            } 
            if(ptrB == NULL){
                ptrB = headA;
                cnt++;
            } 
        }
        return NULL;
    }
};