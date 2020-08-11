class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> Sol;
        
        for(int i=0;i<nums.size();i++){
            int Curr=0;
            for(int j=0;j<nums.size();j++){
                if(i==j){
                    continue;
                } else{
                    if(nums[i]>nums[j]){
                        Curr++;
                    }
                }
            }
            Sol.push_back(Curr);
        }
        
        return Sol;
    }
};