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
    bool isPalindrome(ListNode* head) {
        int len = 0;
        if(head==NULL || head->next == NULL) return true;
        ListNode* iter = head;
        while(iter){
            iter = iter->next;
            len++;
        }
        int half = len/2;
        if(len%2 == 1) half++;
        reverse_list(head, half);    
        return check_pal(head, half);
    }
private:
    void reverse_list(ListNode *h, int pos){
        ListNode *tmp_a, *tmp_b, *tmp_c; 
        ListNode *m;
        tmp_a = NULL;
        tmp_b = h;
        tmp_c = NULL;
        int cnt = 0;
        while(cnt<pos-1){
            tmp_b = tmp_b->next;
            cnt++;
        }
        m = tmp_b;
        if(tmp_b->next) tmp_b = tmp_b->next;
        while(tmp_b){
                tmp_c = tmp_b->next;
                tmp_b->next = tmp_a;
                tmp_a = tmp_b;
                tmp_b = tmp_c;
        }   
        m->next = tmp_a;
    }   
    bool check_pal(ListNode *h, int pos){
        ListNode *other = h;
        int cnt = 0;
        while(cnt < pos){
            other = other->next;
            cnt++;
        }
        while(other){
            if(h->val != other->val) return false;
            other = other->next;
            h = h->next;
        }
        return true;
    }
};
