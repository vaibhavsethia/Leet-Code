class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        map<string, int> MapA;
        map<string, int> MapB;
        
        string Temp = "";
        
        for(int i=0; i<A.length(); i++){
            if(A[i]==' '){
                MapA[Temp]++;
                Temp = "";
            } else{
                Temp += A[i];
            }
        }
        
        MapA[Temp]++;
        
        Temp = "";
        
        for(int i=0; i<B.length(); i++){
            if(B[i]==' '){
                MapB[Temp]++;
                Temp = "";
            } else{
                Temp += B[i];
            }
        }
        
        MapB[Temp]++;
        
        vector<string> Sol;
        map<string, int>::iterator itr;
        
        for(itr = MapA.begin(); itr!=MapA.end(); itr++){
            if(MapB.find(itr->first)==MapB.end() && itr->second==1){
                Sol.push_back(itr->first);
            }
        }
        
        for(itr = MapB.begin(); itr!=MapB.end(); itr++){
            if(MapA.find(itr->first)==MapA.end() && itr->second==1){
                Sol.push_back(itr->first);
            }
        }
        
        return Sol;
    }
};