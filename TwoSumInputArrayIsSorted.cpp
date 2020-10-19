class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        for (int i=0; i<numbers.size(); i++) {
            if ( m.find(target - numbers[i]) == m.end() ) {
                m[numbers[i]] = i;
            }else{
                if(m[target - numbers[i]] < i){
                    result.push_back(m[target - numbers[i]]+1);
                    result.push_back(i+1);
                } else{
                    result.push_back(i+1);
                    result.push_back(m[target - numbers[i]]+1);
                }
            }
        }
        return result;
    }
};