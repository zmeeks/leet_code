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
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head, *slow=head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                while(slow != head){
                    slow = slow->next;
                    head = head->next;
                }
                return head;
            }
        }
        return NULL;
    }
};

/**
 *
 *  the obvious solution is to use a hash table.  To see if there exists a solution sans extra space, we first see 
 *  what information is available.  using two pointers, if there exists a loop there will be a portion before the loop, 
 *  let = X, a portion between the start of the loop and when the two pointers meet, let = Y, and a portion between Y
 *  and the end of the loop, let = Z. Let loop = L, --> L = y + z.  We want to find X.  Total number of nodes in the
 *  presence of a loop is X + L = X + Y + Z.  let pointers = fast and slow as defined in code.  fast = X + Y + cL for 
 *  some constant c. slow = X + Y. fast = 2*slow --> X + Y + cL = 2X + 2Y --> X + Y - X - 2Y + cY + cZ = X --> 
 *  --> (c-1)Y + cZ = X --> Z + (c-1)L = X --> length(X) == length(Z), thus we have enough information to solve the
 *  problem as is.
 *
**/