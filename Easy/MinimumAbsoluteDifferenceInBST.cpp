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
    vector<int> Temp;
    
    void inorder(TreeNode *root){
        if(root->left){
            inorder(root->left);
        } 
        
        Temp.push_back(root->val);
        
        if(root->right){
            inorder(root->right);
        }
    }
    
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        
        int Sol = Temp[1]-Temp[0];
        
        for(int i=2; i<Temp.size(); i++){
            Sol = min(Sol, Temp[i] - Temp[i-1]);
        }
        
        return Sol;
    }
};