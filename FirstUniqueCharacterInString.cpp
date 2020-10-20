class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, pair<int, int>> Map;
        
        for(int i=0; i<s.length(); i++){
            if(Map.find(s[i]) == Map.end()){
                Map.insert(make_pair(s[i], make_pair(1, i)));
            } else{
                Map.find(s[i])->second.first++;
                Map.find(s[i])->second.second = i;
            }
        }
        
        int Index = INT_MAX;
        for(auto itr = Map.begin(); itr != Map.end(); itr++){
            if(itr->second.first == 1 && itr->second.second < Index){
                Index = itr->second.second;
            }
        }
        
        return Index==INT_MAX?-1:Index;
    }
};