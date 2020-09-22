class Solution {
public:
    string Convert(string S, int Count){
        if(S[0] != 'a' && S[0] != 'A'&& S[0] != 'e' && S[0] != 'E' && S[0] != 'i' && S[0] != 'I' && S[0] != 'o' && S[0] != 'O' && S[0] != 'u' && S[0] != 'U'){
            S.push_back(S[0]);
            S.erase(S.begin());
        }
        
        S.push_back('m');
        S.push_back('a');
        
        for(int i=0; i<Count; i++){
            S.push_back('a');
        }
        
        return S;
    }
    
    string toGoatLatin(string S) {
        string Sol = "", Temp = "";
        int Count = 0;
        
        for(int i=0; i<S.length(); i++){
            if(S[i] == ' '){
                Sol += Convert(Temp, ++Count);
                Sol += " ";
                Temp = "";
            } else{
                Temp += S[i];
            }
        }
        
        Sol += Convert(Temp, ++Count);
        
        return Sol;
    }
};