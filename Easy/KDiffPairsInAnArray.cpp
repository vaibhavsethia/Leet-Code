class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int, int> Map;
        int Sol = 0;
        
        for(int i=0; i<nums.size(); i++){
            Map[nums[i]]++;
        }
        
        if(k==0){
            for(auto itr=Map.begin(); itr!=Map.end(); itr++){
                if(itr->second>1){
                    Sol++;
                }
            }
        } else if(k<0){
            Sol = 0;
        } else{
            for(auto itr=Map.begin(); itr!=Map.end(); itr++){
                if(Map.find(itr->first-k)!=Map.end()){
                    Sol++;
                }
            }
        }
        
        return Sol;
    }
};