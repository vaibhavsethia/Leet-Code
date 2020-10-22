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
    void Inorder(TreeNode* root, vector<vector<int>> *Sol, int Level) {
          if (root == NULL) {
              return;
          }
          if (Level == Sol->size()) {
              Sol->push_back({});
          }                
          Inorder(root->left, Sol, Level+1);
          Sol->at(Level).push_back(root->val);
          Inorder(root->right, Sol, Level+1);        
      }

      vector<vector<int>> levelOrder(TreeNode* root) {
          vector<vector<int>> Sol;
          Inorder(root, &Sol, 0);
          return Sol;
      }
    
    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<int>> Traversal = levelOrder(root);
        vector<double> Sol;
        
        for(int i=0; i<Traversal.size(); i++){
            double Sum = 0;
            
            for(int j=0; j<Traversal[i].size(); j++){
                Sum += Traversal[i][j];
            }
            
            Sum /= Traversal[i].size();
            Sol.push_back(Sum);
        }
        
        return Sol;
    }
};