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
    void Dummy(TreeNode* root, int Temp, int& Ans)
    {
        if(root==0)
            return;
        
        Temp = Temp*2 + root->val;
        
        if(root->left==0 and root->right==0)
        {
            Ans += Temp;
            return;
        }
        
        Dummy(root->left, Temp, Ans);
        Dummy(root->right, Temp, Ans);
    }
    
    int sumRootToLeaf(TreeNode* root) {
        int Ans = 0;
        
        Dummy(root,0,Ans);
        
        return Ans;
    }
};