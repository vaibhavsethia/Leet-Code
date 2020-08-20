class Solution {
public:
    string generateTheString(int n) {
        string Sol = "";
        if(n%2==0){
            Sol.push_back('a');
            for(int i=1; i<n; i++){
                Sol.push_back('b');
            }
        } else{
            for(int i=0; i<n; i++){
                Sol.push_back('a');
            }
        }
        
        return Sol;
    }
};