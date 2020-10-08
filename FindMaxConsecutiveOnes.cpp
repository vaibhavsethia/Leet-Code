class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int Max = 0;
        int Curr = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                Curr++;
            } else{
                Max = max(Curr, Max);
                Curr = 0;
            }
        }
        
        return max(Curr, Max);    
    }
};