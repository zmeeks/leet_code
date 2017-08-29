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
        if(head == NULL) return head;
        ListNode *c;
        c = head->next;
        head->next = a;
        a = head;
        head = c;
        reverseList(head);
        return a;
    }
private:
    ListNode* a;
};

//not as fast as helper recursive version, but more concise