class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> Sol;
        
        for(int i=left; i<=right; i++){
            int Num = i, Dig;
            bool IsDivisible = true;
            
            while(Num>0){
                Dig = Num%10;
                if(Dig == 0 || i%Dig!=0){
                    IsDivisible = false;
                }
                
                Num /= 10;
            }
            
            if(IsDivisible){
                Sol.push_back(i);
            }
        }
        
        return Sol;
    }
};