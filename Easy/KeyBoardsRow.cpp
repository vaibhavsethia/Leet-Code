class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string Row1 = "qwertyuiopQWERTYUIOP";
        string Row2 = "asdfghjklASDFGHJKL";
        string Row3 = "zxcvbnmZXCVBNM";
        vector<string> Sol;
        
        for(int i=0; i<words.size(); i++){
            map<int, int> Map;
            
            for(int j=0; j<words[i].length(); j++){
                if(Row1.find(words[i][j]) != string::npos){
                    Map[1]++;
                }
                if(Row2.find(words[i][j]) != string::npos){
                    Map[2]++;
                }
                if(Row3.find(words[i][j]) != string::npos){
                    Map[3]++;
                }
            }
            
            if(Map.size() == 1){
                Sol.push_back(words[i]);
            }
        }
        
        return Sol;
    }
};