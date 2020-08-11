class Solution {
public:
    int xorOperation(int n, int start) {
        int Sol=0;
        
        for(int i=0; i<n; i++){
            Sol ^= start + 2*i;
        }
        
        return Sol;
    }
};