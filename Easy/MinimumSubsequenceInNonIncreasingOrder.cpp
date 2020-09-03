class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int Sum = 0;
        
        for(int i=0; i<nums.size(); i++){
            Sum += nums[i];
        }
        
        vector<int> Sol;
        int SolSum = 0;
        
        for(int i=nums.size()-1; i>=0; i--){
            if(SolSum <= Sum){
                Sol.push_back(nums[i]);
                SolSum += nums[i];
                Sum -= nums[i];
            }else{
                break;
            }
        }
        
        return Sol;
    }
};