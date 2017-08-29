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
        unordered_map<ListNode*, int> umap;
        while(headA){
            umap[headA] = 1;
            headA = headA->next;
        }
        while(headB){
            if(umap.count(headB)) return headB;
            headB = headB->next;
        }
        return NULL;
    }
};