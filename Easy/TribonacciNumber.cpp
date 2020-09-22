class Solution {
public:
    int tribonacci(int n) {
        if(n<2){
            return n;
        } else if(n==2){
            return 1;
        }
        
        int DP[n+2];
        
        DP[0] = 0;
        DP[1] = 1;
        DP[2] = 1;
        
        for(int i=3; i<=n; i++){
            DP[i] = DP[i-1] + DP[i-2] + DP[i-3];
        }
        
        return DP[n];
    }
};