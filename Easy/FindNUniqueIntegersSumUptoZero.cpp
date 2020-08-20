class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> Sol(n,0);
        
        if(n==1){
            return Sol;
        }
        if(n==2){
            Sol[0] = 1;
            Sol[1] = 2;
            return Sol;
        }
        
        for(int i=0; i<n/2; i++){
            Sol[i] = -1 * (n/2 - i);
            Sol[n-1-i] = n/2 - i;
        }
        
        return Sol;
    }
};