class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> Sol;
        
        for(int i=1; i<=n; i++){
            if(i%15 == 0){
                Sol.push_back("FizzBuzz");
            } else if(i%5 == 0){
                Sol.push_back("Buzz");
            } else if(i%3 == 0){
                Sol.push_back("Fizz");
            } else{
                Sol.push_back(to_string(i));
            }
        }
        
        return Sol;
    }
};
