class Solution {
public:
    bool isUgly(int num) {
        vector<int> Factors;
        
        if(num<=0){
            return false;
        }
        
        if(num % 2 == 0){
            Factors.push_back(2);
            while(num % 2 == 0){
                num /=2;
            }
        }
        
        for(int i=3; i<=sqrt(num); i+=2){
            if(num % i == 0){
                Factors.push_back(i);
                    while(num % i == 0){
                    num /=i;
                }
            }
        }
        
        if(num > 2){
            Factors.push_back(num);
        }
        
        for(int i=0; i<Factors.size(); i++){
            cout<<Factors[i]<<" ";
        }
        if(Factors.size()>3){
            return false;
        } else{
            for(int i=0; i<Factors.size(); i++){
                if(Factors[i] != 2 && Factors[i] != 3 && Factors[i] != 5){
                    return false;
                }
            }
        }
        
        return true;
    }
};