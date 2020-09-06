/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* Dummy(TreeNode* t1, TreeNode* t2) {
        if(!t2){
            return t1;
        }
        
        if(!t1){
            return t2;
        }

        t1->val=t1->val+t2->val;
        t1->left=Dummy(t1->left,t2->left);
        t1->right=Dummy(t1->right,t2->right);
        
        return t1;
    }

    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        return Dummy(t1, t2);
    }
};