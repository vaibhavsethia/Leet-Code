class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int Sol = 0;
        
        for(int i=0; i<nums.size(); i++){
            int digits=0;
            while(nums[i]>0){
                nums[i]/=10;
                digits++;
            }
            if(digits%2==0){
                Sol++;
            }
        }
        
        return Sol;
    }
};