class Solution {
public:
    int maximum69Number (int num) {
        int temp = num, power = -1, index = 0, digit;
        
        while(temp>0){
            index++;
            digit = temp % 10;
            if(digit == 6){
                power = index;            }
            temp /= 10;
        }
                
        if(power == -1){
            return num;
        } else{
            return num + (3 * pow(10,power-1));
        }
    }
};