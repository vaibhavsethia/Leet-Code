class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int Sum = (nums.size() + 1) * (nums.size()) / 2;
        
       for(int i = 0; i < nums.size(); i++){
           Sum -= nums[i];
       }
        
       return Sum;
    }
};