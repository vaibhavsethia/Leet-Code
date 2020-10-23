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
    int pathSumUtil(TreeNode *root, int Sum, int Target){
        if(!root){
          return 0;
        }

        Sum += root->val;
        int Ans = 0;
        Ans += (Sum == Target) ? 1 : 0;
        Ans += pathSumUtil(root->left, Sum, Target);
        Ans += pathSumUtil(root->right, Sum, Target);
        return Ans;
    }

    int pathSum(TreeNode* root, int Sum) {
        if(!root){
          return 0;
        }

        int Ans = 0;
        Ans += pathSumUtil(root, 0, Sum);
        Ans += pathSum(root->left, Sum);
        Ans += pathSum(root->right, Sum);
        return Ans;
    }
};