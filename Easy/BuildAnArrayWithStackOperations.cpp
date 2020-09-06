class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> Sol;
        int prev = 0;
        
        for(int i=0; i<target.size(); i++){
            if(target[i] - prev == 1){
                Sol.push_back("Push");
            }
            else{
                for(int j=0; j<target[i]-prev-1; j++){
                    Sol.push_back("Push");
                    Sol.push_back("Pop");
                }
                Sol.push_back("Push");
            }
            
            prev = target[i];
        }
        
        return Sol;
    }
};