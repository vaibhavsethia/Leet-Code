class Solution {
public:
    string defangIPaddr(string address) {
        string Sol;
        
        for(int i=0;i<address.length();i++){
            if(address[i]!='.'){
                Sol.push_back(address[i]);
            } else{
                Sol.push_back('[');
                Sol.push_back(address[i]);
                Sol.push_back(']');
            }
        }
        
        return Sol;
    }
};