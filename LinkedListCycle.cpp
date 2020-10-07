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
        if (head == NULL) {
            return NULL;
        }
         
        ListNode* Slow = head, *Fast = head->next;  
         
        while(Fast && Fast->next) {
            if (Slow->val == Fast->val) {
                return true;
            }

            Slow = Slow->next;
            Fast = Fast->next->next;
        }
         
        return false;
    }
};