class Solution {
public:
    static bool Compare(int A, int B){
        return (to_string(A) + to_string(B)) > (to_string(B) + to_string(A));
    }
    
    string largestNumber(vector<int>& nums) {
        string Sol = "";
        
        sort(nums.begin(), nums.end(), Compare);
        
        if(nums[0] == 0){
            return "0";
        }
        
        for(int i=0; i<nums.size(); i++){
                Sol += to_string(nums[i]);
        }
        
        return Sol;
    }
};
