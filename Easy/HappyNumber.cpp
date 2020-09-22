class Solution {
public:
    bool isHappy(int n) {
        int checks = 100;
        
        while(checks-- > 0){
            int Temp = 0;
            
            while(n>0){
                int dig = n%10;
                Temp += dig * dig;
                n /= 10;
            }
            
            n = Temp;
            
            if(n==1){
                return true;
            }
        }
        
        return false;
    }
};