class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int> BitA(32, 0);
        vector<int> BitB(32, 0);
        int Pow=0;
        
        while(x>0){
            BitA[Pow] = x%2;
            x /= 2;
            Pow++;
        }
        Pow=0;
        while(y>0){
            BitB[Pow] = y%2;
            y /= 2;
            Pow++;
        }
        
        int Sol=0;
        for(int i=0; i<32; i++){
            if(BitA[i]!=BitB[i]){
                Sol++;
            }
        }
        
        return Sol;
    }
};