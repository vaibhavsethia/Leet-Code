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
    vector<TreeNode*> Temp;
    
    void Inorder(TreeNode* node){ 
        if(node==NULL){
            return; 
        }
        Inorder(node->left); 
        node->left=nullptr;
        Temp.push_back(node);
        Inorder(node->right); 
    }   
    
    TreeNode* increasingBST(TreeNode* root) {
        if(!root){
            return root;
        }
        Inorder(root);
        
        for(int i=0; i<Temp.size()-1; i++){
           Temp[i]->right=Temp[i+1];
        }
        return Temp[0];
    }
};