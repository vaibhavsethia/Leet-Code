class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int Count = 0;
        
        for(int i=0; i<nums.size(); i++){
            int Digs = 0;
            
            while(nums[i]>0){
                nums[i] /= 10;
                Digs++;
            }
            
            if(Digs%2 == 0){
                Count++;
            }
        }
        
        return Count;
    }
};