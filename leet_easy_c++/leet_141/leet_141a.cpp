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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, int> umap;
        ListNode * iter = head;
        while(iter){
            if(umap.find(iter)==umap.end()) umap[iter]=1;
            else return true;
            iter = iter->next;
        }
        return false;
    }
};