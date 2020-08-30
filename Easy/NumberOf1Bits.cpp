class Solution {
public:
    int hammingWeight(uint32_t n) {
        int Sol = 0;
        
        while (n) {
            Sol += (n & 1);
            n = n >> 1;
        }
        
        return Sol;
    }
};