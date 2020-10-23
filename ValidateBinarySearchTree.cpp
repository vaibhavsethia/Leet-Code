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
    bool isValidUtil(TreeNode* root, long Min, long Max){
        if(root==NULL){
          return true;
        }
            
        if(root->val >= Max || root->val <= Min){
          return false;
        }
            
        return isValidUtil(root->left,Min,root->val)&isValidUtil(root->right,root->val,Max);
    }
    
    bool isValidBST(TreeNode* root) {
        return isValidUtil(root, LONG_MIN, LONG_MAX);
    }
};