class Solution {
public:
    int balancedStringSplit(string s) {
        int Sol=0, Cnt=0;
        
        for(int i=0; i<s.length(); i++){
            if(s[i]=='R'){
                Cnt--;
                if(Cnt==0){
                    Sol++;
                }
            } else{
                Cnt++;
                if(Cnt==0){
                    Sol++;
                }
            }
        }
        
        return Sol;
    }
};