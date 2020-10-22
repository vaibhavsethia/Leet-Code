/**
 * Definition for a binarY tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int X) : val(X), left(nullptr), right(nullptr) {}
 *     TreeNode(int X, TreeNode *left, TreeNode *right) : val(X), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* Parent1 = new TreeNode();
    TreeNode* Parent2 = new TreeNode();
    int D1, D2;
    
    void Util(TreeNode* root, TreeNode* Parent, int Depth, int X, int Y){
        if(root==NULL){
          return;
        }
            
        if(root->val == X){
            Parent1 = Parent;
            D1 = Depth;
        }
        if(root->val == Y){
            Parent2 = Parent;
            D2 = Depth;
        }

        Util(root->left, root, Depth+1, X, Y);
        Util(root->right, root, Depth+1, X, Y);

        return;
    }

    bool isCousins(TreeNode* root, int X, int Y) {
        Util(root,NULL,0,X,Y);  

        if(D1==D2 && Parent1!=Parent2){
          return true;
        }
        
        return false;
    }
};