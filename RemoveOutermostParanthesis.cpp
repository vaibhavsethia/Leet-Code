class Solution {
public:
    string removeOuterParentheses(string S) {
        string Sol;
        int Count=0;
        bool Enter=false;
        
        for(int i=0; i< S.length(); i++){
            if(S[i]=='('){
                Count++;
                if(Count>=2){
                    Enter=true;
                }
            } else{
                Count--;
                if(Count==0){
                    Enter=false;
                }
            }
            
            if(Enter){
                Sol.push_back(S[i]);
            }
        }
        
        return Sol;
    }
};