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
    ListNode* Reverse(ListNode* head){
        if(!head || !head->next){
            return head;
        }
        
        ListNode* Curr = head;
        ListNode* Prev = NULL;
        ListNode* Next = NULL;
        
        while(Curr){
            Next = Curr->next;
            Curr->next = Prev;
            Prev = Curr;
            Curr = Next;
        }
        
        return Prev;
        
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = Reverse(l1);
        l2 = Reverse(l2);
        
        ListNode* Result = new ListNode(0);
        ListNode* Sol = Result;
        ListNode* Prev = NULL;
        int Carry = 0;
        int Sum = 0;
        
        while(l1 || l2 || Carry){
            if(Result == NULL){
                Result = new ListNode(0);
                Prev->next = Result;
            }
            
            int First = l1?l1->val:0;
            int Second = l2?l2->val:0;
            
            Sum = First + Second + Carry;
            Carry = Sum / 10;
            Sum = Sum % 10;
            
            Result->val = Sum;
            Prev = Result;
            Result = Result->next;
            
            l1 = l1?l1->next:NULL;
            l2 = l2?l2->next:NULL;
        }
        
        return Reverse(Sol);
    }
};