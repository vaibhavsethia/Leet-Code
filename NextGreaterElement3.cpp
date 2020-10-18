class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int> A;
        while(n>0){
            A.push_back(n%10);
            n /= 10;
        }
        
        reverse(A.begin(), A.end());
        
        int N = A.size();
        
        int i = N-1;
	    for(;i>0; i--){
	        if(A[i]>A[i-1]){
	            break;
	        }
	    }
        if(i==0){
            return -1;
        }
	    
	    int dig1 = A[i-1], small = i;
	    for(int j=i+1; j<N; j++){
	        if(A[j] > dig1 && A[j] < A[small]){
	            small = j;
	        }
	    }
	    
	    int T = A[small];
	    A[small] = A[i-1];
	    A[i-1] = T;
	    
	    sort(A.begin()+i, A.end());
        
        int Sol = 0;
        
        for(int i=0; i<N; i++){
            Sol = Sol*10 + A[i];
        }
        
        return Sol;
    }
};