class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        if (arr.size() == 0){
            return false;
        }
        
        if (arr.size() == 1){
            return true;
        }
        
        unordered_map<int, int> Map; 
        unordered_set<int> Set;
        
        for(int i=0; i<arr.size(); i++){
            Map[arr[i]]++;
        }

        for (auto Count : Map){
            Set.insert(Count.second);
        }

        return Map.size() == Set.size();   
    }
};