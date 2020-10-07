class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> Sol(arr.size(), 0);
        int Max = -1;
        
        for(int i=arr.size()-1; i>=0; i--){
            if(i==arr.size()-1){
                Sol[i] = Max;
                Max = arr[i];
            } else{
                Sol[i] = Max;
                if(Max<arr[i]){
                    Max = arr[i];
                }
            }
        }
        
        return Sol;
    }
};