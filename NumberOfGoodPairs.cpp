class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int Sol=0;
        
        for(int i=nums.size()-1;i>=0;i--){
            for(int j=0;j<i;j++){
                if(nums[j]==nums[i]){
                    Sol++;
                }
            }
        }
        
        return Sol;
    }
};