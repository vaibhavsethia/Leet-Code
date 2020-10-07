class Solution {
public:
    void Swap(int &A, int&B){
        int T = A;
        A=B;
        B=T;
    }
    
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0; i<A.size(); i++){
            for(int j=0; j<A[i].size()/2; j++){
                Swap(A[i][j], A[i][A[i].size()-j-1]);
            }
            for(int j=0; j<A[i].size(); j++){
                A[i][j] = A[i][j]==0?1:0;
            }
        }
        
        return A;
    }
};