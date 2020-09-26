class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange){
     int Sum = numBottles, Empty = 0;
        
    while(numBottles>numExchange)
    {

            Sum+=numBottles/numExchange;
            numBottles=numBottles/numExchange+numBottles%numExchange;

        }
        
        Sum+=numBottles/numExchange;
        return Sum;
    }
};