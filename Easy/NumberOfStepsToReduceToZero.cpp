class Solution {
public:
    int numberOfSteps (int num) {
        int Sol=0;
        
        while(num>0){
            if(num%2==0){
                num /= 2;
                Sol++;
            } else{
                num--;
                Sol++;
            }
        }
        
        return Sol;
    }
};