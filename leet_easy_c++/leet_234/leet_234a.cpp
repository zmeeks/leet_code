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
        ListNode * iter = head;
        while(iter){
            iter = iter->next;
            len++;
        }
        int * nums = new int[len];
        iter = head;
        for(int i=0; i<len; i++){
            nums[i]=iter->val;
            iter = iter->next;
        }
        int f = 0, b = len-1;
        while(f<b){
            if(nums[f]!=nums[b]) return false;
            f++;
            b--;
        }
        delete[] nums;
        return true;
    }
};