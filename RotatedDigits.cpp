class Solution {
public:
    int rotatedDigits(int N) {\
        if(N==1){
            return 0;
        } else if(N<5){
            return 1;
        } else if(N<6){
            return 2;
        } else if(N<9){
            return 3;
        } else if(N<11){
            return 4;
        } else {
            int Sol = 0;
            
            for(int i=1; i<=N; i++){
                int Num = i;
                bool Good = false;
                while(Num>0){
                    if(Num%10==3 || Num%10==4 || Num%10==7){
                        Good = false;
                        break;
                    }
                    if(Num%10==2 || Num%10==5 || Num%10==6 || Num%10==9){
                        Good = true;
                    }
                    Num/=10;
                }
                
                if(Good){
                    Sol++;
                }
            }
            
            return Sol;   
        }
    }
};