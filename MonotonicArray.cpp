class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int Count1 = 1, Count2 = 1;
        
        for(int i=0;i<A.size()-1;i++){
            if(A[i] <= A[i+1]){
                Count1++;
            }
            if(A[i] >= A[i+1]){
                Count2++;
            }
        }
        
        return Count1==A.size() || Count2==A.size();
        
    }
};