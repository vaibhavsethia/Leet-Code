class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> Sol;
        long long int Sum=0;
        
        for(int i=0; i<nums.size(); i++){
            Sum += nums[i];
            Sol.push_back(Sum);
        }
        
        return Sol;
    }
};