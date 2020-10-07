class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, pair<int, int>> Map;
        
        for(int i=0; i<paths.size(); i++){
            if(Map.find(paths[i][0]) == Map.end()){
                Map.insert(make_pair(paths[i][0], make_pair(1, 0)));
            } else{
                Map[paths[i][0]].first++;
            }
            
            if(Map.find(paths[i][1]) == Map.end()){
                Map.insert(make_pair(paths[i][1], make_pair(1, 1)));
            } else{
                Map[paths[i][1]].first--;
            }
        }
        
        string Sol = "";
        unordered_map<string, pair<int, int>>:: iterator itr; 
        for(itr = Map.begin(); itr != Map.end(); itr++){
            if(itr->second.first == 1 && itr->second.second == 1){
                Sol = itr->first;
            }
        }
        
        return Sol;
    }
};