class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        unordered_map<char, int> Map;
        
        for(int i=0; i<A[0].length(); i++){
            Map[A[0][i]]++;
        }
        
        for(int i=1; i<A.size(); i++){
            unordered_map<char, int> Temp;
            
            for(int j=0; j<A[0].length(); j++){
                Temp[A[i][j]]++;
            }
            
            for(auto itr = Map.begin(); itr != Map.end(); itr++){
                itr->second = min(itr->second, Temp[itr->first]);
            }
        }
        
        vector<string> Sol;
        
        for(auto itr = Map.begin(); itr != Map.end(); itr++){
            for(int i = 0; i<itr->second; i++){
                string S(1, itr->first);
                Sol.push_back(S);
            }
        }
        
        return Sol;
    }
};