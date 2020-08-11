class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> Sol;
        
        for(int i=0; i<n; i++){
            Sol.push_back(nums[i]);;
            Sol.push_back(nums[i+n]);
        }
        
        return Sol;
    }
};