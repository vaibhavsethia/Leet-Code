class Solution {
public:
    int subtractProductAndSum(int n) {
        int Product=1, Sum=0, digit;
        
        while(n>0){
            digit=n%10;
            n/=10;
            Product*=digit;
            Sum+=digit;
        }
        
        return Product-Sum;
    }
};