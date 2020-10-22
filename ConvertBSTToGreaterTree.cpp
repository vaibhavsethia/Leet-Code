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
    void converBSTUtil(TreeNode* root, int* Sum){
        if(!root){
            return;
        }
        
        converBSTUtil(root->right, Sum);
        *Sum += root->val;
        root->val = *Sum;
        converBSTUtil(root->left, Sum);
    }
    
    TreeNode* convertBST(TreeNode* root) {
        int Sum = 0;
        converBSTUtil(root, &Sum);
        
        return root;
    }
};