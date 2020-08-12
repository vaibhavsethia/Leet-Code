class Solution {
    public:
        int oddCells(int n, int m, vector<vector<int>>& indices) {
            vector<int> A(n);
            vector<int> B(m);
            int Sol=0;
            
            for(int i=0;i< indices.size();i++){
                A[indices[i][0]]++;
                B[indices[i][1]]++;
            }
            
            for(int i=0;i<n;i++){
                if(A[i]%2==0){
                    for(int j=0;j<m;j++){
                        if(B[j]%2!=0){
                            Sol++;
                        }
                    }
                }
                else{
                    for(int j=0;j<m;j++){
                        if(B[j]%2==0){
                            Sol++;
                        }
                    }
                }
            }
            return Sol;
        }
};