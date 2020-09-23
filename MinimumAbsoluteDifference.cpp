class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        vector<vector<int>> Sol;
        int Min = arr[1] - arr[0];
        
        for(int i=0; i<arr.size(); i++){
            if(abs(arr[(i+1)%arr.size()] - arr[i]) == Min){
                vector<int> Temp;
                Temp.push_back(arr[i]);
                Temp.push_back(arr[(i+1)%arr.size()]);
                Sol.push_back(Temp);
            } else if(abs(arr[(i+1)%arr.size()] - arr[i]) < Min){
                Min = abs(arr[(i+1)%arr.size()] - arr[i]);
                Sol.clear();
                vector<int> Temp;
                Temp.push_back(arr[i]);
                Temp.push_back(arr[(i+1)%arr.size()]);
                Sol.push_back(Temp); 
            }
        }
        
        return Sol;
    }
};