class Solution {
public:
    string removeSpecialCharacter(string S) 
    { 
        string Sol = "";
        for (int i = 0; i < S.size(); i++) { 
            if((S[i]>='a'&&S[i]<='z') || (S[i]>='A'&&S[i]<='Z') || (S[i]>='0'&&S[i]<='9')) {
                Sol += S[i];
            }
        }
        
        return Sol;
    } 
    
    bool isPalindrome(string s) {
        string S1 = removeSpecialCharacter(s);
        transform(S1.begin(), S1.end(), S1.begin(), ::toupper);
        
        for(int i=0; i<S1.length(); i++){
            if(S1[i] != S1[S1.length()-1-i]){
                return false;
            }
        }
        
        return true;
    }
};