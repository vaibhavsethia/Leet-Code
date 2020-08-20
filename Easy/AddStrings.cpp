class Solution {
public:
    string addStrings(string num1, string num2) {
      string ExtraZeros(max(num1.size(), num2.size())-min(num1.size(), num2.size()), '0');
          
      if(num2.size() > num1.size()){
          num1 = ExtraZeros + num1;
      } else {
          num2 = ExtraZeros + num2;
      }
          
      string Sol = "";
      int Carry = 0;
          
      for(int i = num2.size()-1; i >= 0; i--) {
          int A = num1[i] - '0', B = num2[i] - '0';
          int Temp = A + B + Carry;
          Carry = 0;
          if(Temp > 9) {
              Carry = 1; 
              Temp %= 10;
          }
          Sol = char(Temp + '0') + Sol;
      }
      if(Carry){
          Sol = char(Carry + '0') + Sol;
      }
          
      return Sol;
  }
};
