class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> Rows(matrix.size(),0);
        vector<int> Sol;
        vector<int> Cols(matrix[0].size(),0);

        for (int i=0; i<matrix.size(); i++){
            Rows[i] = matrix[i][0];

            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]<Rows[i]){
                    Rows[i] = matrix[i][j];
                }                
            }
        }

        for (int j=0; j<matrix[0].size(); j++){
            Cols[j]=matrix[0][j];
            for(int i=0; i<matrix.size(); i++){

                if(matrix[i][j]>Cols[j]){
                    Cols[j]=matrix[i][j];
                }
            }
        }

        for (int i=0; i<Rows.size(); i++){
            for (int j=0; j<Cols.size(); j++){
                if(Rows[i]==Cols[j]){
                    Sol.push_back(Rows[i]);
                }
            }
        }

        return Sol;
    }
};