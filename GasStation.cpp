class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(gas.size() == 1){
            if(gas[0] >= cost[0]){
                return 0;
            } else{
                return -1;
            }
        }
        
        int Start = 0, End = 1;
        int Fuel = gas[Start] - cost[Start];
        
        while(End != Start || Fuel < 0){
            while (Fuel < 0 && Start != End){  
                Fuel -= gas[Start] - cost[Start];  
                Start = (Start + 1) % gas.size();  
                
                if (Start == 0)  
                return -1;  
            }  
  
            Fuel += gas[End] - cost[End];  
            End = (End + 1) % gas.size();  
        }  
  
        return Start;        
    }
};