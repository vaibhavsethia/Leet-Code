class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string Code[26] = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
        };
        
        unordered_map<string, int> Map;
        
        for(int i=0; i<words.size(); i++){
            string Morse = "";
            
            for(int j=0; j<words[i].length(); j++){
                Morse += Code[(int(words[i][j]) - 97)];
            }
            
            if(Map.find(Morse) == Map.end()){
                Map.insert(make_pair(Morse, 1));
            } else{
                Map[Morse]++;
            }
            
            Morse = "";
        }
        
        return Map.size();
    }
};