class Solution {
public:
    int findComplement(int num) {
        int Bits = log2(num);
        
        for (int i = 0; i <= Bits; i++)  
           num = (num ^ (1 << i));  

        return num;
    }
};