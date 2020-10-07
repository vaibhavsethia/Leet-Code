/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<ListNode*> S;
        ListNode* Temp = head;
        
        while(Temp != NULL){
            S.push(Temp);
            Temp = Temp->next;
        }
        
        while(head != NULL){
            if(head->val != S.top()->val){
                return false;
            }
            S.pop();
            head = head->next;
        }
        
        return true;
    }
};