class Solution {
public:
    string sortString(string s) {
        map<char, int> Map;
        
        for(int i = 0; i < s.length(); i++)
            Map[s[i]]++;
        
        string Sol = "";
        while(Sol.length() != s.length()){
            map<char, int> :: iterator itr;
            for(itr = Map.begin(); itr != Map.end(); itr++){
                if(itr->second != 0){
                    Sol += itr->first;
                    itr->second = itr->second - 1;
                }
            }
            map<char, int> :: reverse_iterator it;
            for(it = Map.rbegin(); it != Map.rend(); it++){
                if(it->second != 0){
                    Sol += it->first;
                    it->second = it->second - 1;
                }
            }
        }
        return Sol;
    }
};