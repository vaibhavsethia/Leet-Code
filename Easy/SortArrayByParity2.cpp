class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> Odd, Even;
        
        for(int i=0; i<A.size(); i++){
            if(A[i]%2==0){
                Even.push_back(A[i]);
            } else{
                Odd.push_back(A[i]);
            }
        }
        
        vector<int> Sol;

        for(int k=0; k<A.size()/2; k++){
            Sol.push_back(Even[k]);
            Sol.push_back(Odd[k]);
        }
        
        return Sol;
    }
};