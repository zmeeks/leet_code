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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *iter = new ListNode(0), *head = iter;
        int tmp = 0;
        while(tmp || l1 || l2){
            if(l1){
                tmp += l1->val;
                l1 = l1->next;
            } 
            if(l2){
                tmp += l2->val;
                l2 = l2->next;
            } 
            ListNode *newbie = new ListNode(tmp%10);
            tmp/=10;
            iter->next = newbie;
            iter = iter->next;
        }
        return head->next;
    }
};