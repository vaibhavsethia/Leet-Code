class Solution {
public:
    int fib(int N) {
        if(N < 2)
            return N;
        
        int DP[N+1];
        
        DP[0] = 0;
        DP[1] = 1;
        
        for(int i=2; i<=N; i++)
            DP[i] = DP[i-1] + DP[i-2];
        
        return DP[N];
        
    }
};