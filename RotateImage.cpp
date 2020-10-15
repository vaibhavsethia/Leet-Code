class Solution {
public:
    void rotate(vector<vector<int>>& A) {
        int N = A.size();
        
        for(int i=0; i<N; i++){
	        for(int j=0; j<N; j++){
	            if(j<i){
	                int Temp = A[i][j];
	                A[i][j] = A[j][i];
	                A[j][i] = Temp;
	            }
	        }
	    }
        
        for(int i=0; i<N/2; i++){
            for(int j=0; j<N; j++){
                int Temp = A[j][i];
                A[j][i] = A[j][N-1-i];
                A[j][N-1-i] = Temp;
            }
        }
    }
};