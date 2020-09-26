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
    void Inorder(TreeNode* root, vector<int>& A){
        if (root == NULL) 
            return; 
        
        Inorder(root->left, A);
        if(root->left == NULL && root->right == NULL){
            A.push_back(root->val);
        }
        Inorder(root->right, A); 
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> Tree1, Tree2;
        
        Inorder(root1, Tree1);
        Inorder(root2, Tree2);
        
        for(int i=0; i<Tree1.size(); i++){
            cout<<Tree1[i]<<" "<<Tree2[i]<<endl;
        }
        
        if(Tree1.size() != Tree2.size()){
            return false;
        }
        
        
        
        for(int i=0; i<Tree1.size(); i++){
            if(Tree1[i] != Tree2[i]){
                return false;
            }
        }
        
        return true;
    }
};