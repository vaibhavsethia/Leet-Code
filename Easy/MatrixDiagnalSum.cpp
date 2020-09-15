class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int Sol = 0;
        
        if(mat.size()==1){
            Sol =  mat[0][0];
        } else if(mat.size()==2){
            Sol = mat[0][0]+mat[0][1]+mat[1][0]+mat[1][1];
        } else{
            for(int i=0; i<mat.size(); i++){
                Sol += mat[i][i];
                Sol += mat[i][mat.size()-1-i];
            }
            
            if(mat.size()%2!=0){
                Sol -= mat[(mat.size()-1)/2][(mat.size()-1)/2];
            }
        }
        return Sol;
    }
};