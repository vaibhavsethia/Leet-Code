/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        stack<Node*> s;
        vector<int> Sol;
        
        if(root == NULL){
            return Sol;
        }
        
        s.push(root);
        
        while(!s.empty()){
            Node* temp = s.top();
            Sol.push_back(temp->val);
            s.pop();
            for(int i =0;i<temp->children.size();i++){
                s.push(temp->children[i]);
            }
        }
        
        reverse(Sol.begin(), Sol.end());
        
        return Sol;
                
    }
};