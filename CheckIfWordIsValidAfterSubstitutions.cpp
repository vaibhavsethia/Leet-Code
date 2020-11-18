class Solution {
public:
    bool isValid(string s) {
        
        int Start;
        while(s.length()!=0){
            Start = s.find("abc");

            if(Start == string::npos){
                if(s.length()!=0){
                  return false;
                }
            } else{
                s.erase(Start,3);
            }
            
        }

        return true;
    }
};