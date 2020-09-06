class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        sort(A.begin(), A.end());
        
        for(int i=0; i<A.size(); i++){
            if(A[i]==A[i+1]){
                return A[i];
            }
        }
        
        return -1;
    }
};