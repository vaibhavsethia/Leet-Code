/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z)
    {
        vector<vector<int>> Sol;
        
        for (int x = 1; x <= 100; x++){
            
          int Start = 1;
          int End = 1000;
            
          while (Start < End){
            int Mid = (Start + End)/2;

              if (customfunction.f(x, Mid) == z){
                  Sol.push_back({x, Mid});
                  break;
              }else if (customfunction.f(x, Mid) < z){
                  Start = Mid + 1;
              }else{
                  End = Mid;
              }
        
          }
        }
        return Sol;
  }
};