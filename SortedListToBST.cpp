/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(NULL) {}
 *     ListNode(int x) : val(x), next(NULL) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(NULL), right(NULL) {}
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL){
          return NULL;
        }
            
        if(head->next == NULL){
            return new TreeNode(head->val);
        }
        
        ListNode* Slow = head;
        ListNode* Fast = head;
        ListNode* Prev = NULL;
        
        while(Fast != NULL && Fast->next != NULL )
        {
            Prev = Slow;
            Slow = Slow->next;
            Fast = Fast->next->next;
        }
       
        if(Prev){
          Prev->next = NULL;
        }

        TreeNode* Temp = new TreeNode(Slow->val);

        Temp->left = sortedListToBST(head); 
        Temp->right = sortedListToBST(Slow->next);
        return Temp;
    }
};