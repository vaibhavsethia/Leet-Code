class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> Sol;
        
        int Curr = 0;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i] - Curr != 1){
                for(int j=1; j<arr[i] - Curr; j++){
                    Sol.push_back(Curr+j);
                }
            }
            Curr = arr[i];
        }
        
        if(Sol.size()>=k){
            return Sol[k-1];
        }
        
        return Curr + k - Sol.size();
        
    }
};