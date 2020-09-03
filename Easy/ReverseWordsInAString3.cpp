class Solution {
public:
    string ReverseString(string S){
        string Temp = "";
        
        for(int i=S.length()-1; i>=0; i--){
            Temp += S[i];
        }
        
        return Temp;
    }
    
    string reverseWords(string s) {
        string Temp = "";
        string Sol = "";
        
        for(int i=0; i<s.length(); i++){
            if(s[i] == ' '){
                Sol += ReverseString(Temp) + " ";
                Temp = "";
            } else{
                Temp += s[i];
            }
        }
        
        Sol += ReverseString(Temp);
        
        return Sol;
    }
};