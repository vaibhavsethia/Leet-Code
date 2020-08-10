class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> Sol;
            
        for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies >= *max_element(candies.begin(), candies.end())){
                Sol.push_back(true);
            } else{
                Sol.push_back(false);
            }
        }
        
        return Sol;
    }
};