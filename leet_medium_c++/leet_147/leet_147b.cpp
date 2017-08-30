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
    ListNode* insertionSortList(ListNode* head) {
        int tmp, i, j, x_i,cnt=0;
        for(ListNode* iter = head; iter; iter = iter->next) cnt++;
        vector<int> vec(cnt);
        i=0;
        for(ListNode* iter = head; iter; iter = iter->next, i++) vec[i] = iter->val;
        for(i=1; i<cnt; i++){
            if(vec[i]<vec[i-1]){
                tmp = vec[i];
                j=i-1;
                while(j>0 && tmp < vec[j-1]) j--;
                for(x_i = i;x_i > j; x_i--) vec[x_i] = vec[x_i -1];
                vec[j] = tmp;                   
            }
        }
        i=0;
        for(ListNode* iter = head; iter; iter = iter->next, i++) iter->val = vec[i];
        return head;
    }
};