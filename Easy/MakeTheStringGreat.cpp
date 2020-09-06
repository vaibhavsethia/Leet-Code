class Solution {
public:
    string makeGood(string s) {
        int CurrLength = 0;
        int diff = abs('a'-'A');
        
        while(CurrLength != s.length()){
            CurrLength = s.length();
            
            for(int i=0; i<s.length(); i++){
                if(diff == abs(s[i]-s[i+1])){
                    s.erase(s.begin()+i);
                    s.erase(s.begin()+i);
                    break;
                }
            }
        }
        
        return s;
    }
};