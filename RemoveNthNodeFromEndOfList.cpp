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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int Len = 0;
        ListNode* Temp = head;
        while(Temp){
            Temp = Temp->next;
            Len++;
        }

        if(Len < n){
            return head;
        } else if(Len == n){
            return head->next;
        }

        Temp = head;
        for(int i=1; i<=Len-n-1; i++){
            Temp = Temp->next;
        }
        
        Temp->next = Temp->next->next;

        return head;
    }
};