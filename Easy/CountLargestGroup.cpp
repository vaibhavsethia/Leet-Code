class Solution {
public:
    
    int DigSum(int N){
        int Sum = 0;
        
        while(N>0){
            Sum += N %10;
            N /= 10;
        }
        
        return Sum;
    }
    
    int countLargestGroup(int n) {
        map<int, int> Map;
        
        for(int i=1; i<=n; i++){
            Map[DigSum(i)]++;
        }
        
        int Max = 0, Count = 0;
        
        for(int i=0; i<Map.size(); i++){
            cout<<i<<" "<<Map[i]<<endl;
            if(Map[i]>Max){
                Max = Map[i];
                Count = 1;
            } else if(Map[i]==Max){
                Count++;
            }
        }
        
        return Count;
    }
};