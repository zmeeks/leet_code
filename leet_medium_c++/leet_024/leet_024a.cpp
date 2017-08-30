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
    ListNode* swapPairs(ListNode* head) {
        stack<ListNode*> stk;
        int cnt = 0;
        while(head){
            stk.emplace(head);
            head = head->next;
            cnt++;
        }
        ListNode* a;
        ListNode* b = NULL;
        ListNode* prev;
        if(cnt%2==0)
            prev = NULL;
        else{
            prev = stk.top();
            stk.pop();
            b = prev;
        }
        while(!stk.empty()){
            b = stk.top();
            stk.pop();
            a = stk.top();
            stk.pop();
            b->next = a;
            a->next = prev;   
            prev = b;
        }
        return b;
    }
};