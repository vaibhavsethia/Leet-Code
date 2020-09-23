class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> Map;
        
        for(int i=0; i<nums.size(); i++){
            Map[nums[i]]++;
        }
        
        vector<int> Sol;
        
        for(auto itr=Map.begin(); itr!=Map.end(); itr++){
            if(itr->second > nums.size()/3){
                Sol.push_back(itr->first);
            }
        }
        
        return Sol;
    }
};