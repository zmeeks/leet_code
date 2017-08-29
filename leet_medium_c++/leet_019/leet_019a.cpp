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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        queue<ListNode*> q;
        ListNode* tmp;
        q.push(NULL);
        ListNode* iter = head;
        while(iter){
            q.emplace(iter);
            if(q.size()>n+1) q.pop();
            iter = iter->next;
        }
        if(q.front()==NULL){
            q.pop();
            q.pop();
            if(q.empty()) return NULL;
            else return q.front();
        }
        else{
            tmp = q.front();
            q.pop();
            tmp->next = q.front()->next;
            return head;
        }
    }
};