class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> Temp = heights;
        
        sort(Temp.begin(), Temp.end());
        
        int Sol = 0;
        
        for(int i=0; i<Temp.size(); i++){
            if(Temp[i] != heights[i]){
                Sol++;
            }
        }
        
        return Sol;
    }
};