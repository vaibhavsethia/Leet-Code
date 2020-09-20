class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        
        double Sum = 0;
        
        for(int i=1; i<salary.size()-1; i++){
            Sum += salary[i];
        }
        
        return Sum / (salary.size()-2);
    }
};