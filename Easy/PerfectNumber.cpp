class Solution {
public:
    bool checkPerfectNumber(int num) {
        int Factors = 1; 
        
        if(num == 1){
            return false;
        }
        
        for (int i=2; i<=sqrt(num); i++) { 
            if (num%i==0) { 
                Factors += i;
                if (num/i!=i){
                    Factors += num/i;
                } 
            } 
        }
        
        return num==Factors;
    }
};