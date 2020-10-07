class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> Sol;
        
        for(int i=0; i<nums.size(); i++){
            Sol.insert(Sol.begin() + index[i], nums[i]);
        }
        
        return Sol;
    }
};