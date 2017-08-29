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
        ListNode* a = NULL;
        ListNode* b = head;
        ListNode* c;
        reverse_it(a,b,c);
        return new_head;
    }
    void reverse_it(ListNode* a, ListNode* b, ListNode* c){
        if(b == NULL){
            new_head = a;
            return;
        } 
        c = b->next;
        b->next = a;
        a = b;
        b=c;
        reverse_it(a,b,c);
    }
private:
    ListNode* new_head;
};

// a recursice solution just for fun