class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int Sol = 0;
        
        for(int i=0; i<nums.size(); i+=2){
            Sol += nums[i];
        }
        
        return Sol;
    }
};