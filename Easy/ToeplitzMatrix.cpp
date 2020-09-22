class Solution {
    public:
        bool isToeplitzMatrix(vector<vector<int>> matrix) {
            map<int, int> Map;
            
            for(int i=0; i<matrix.size(); i++){
                for(int j=0; j<matrix[i].size();j++){
                    if(Map.find(i-j)==Map.end()){
                        Map.insert(make_pair(i-j,matrix[i][j]));
                    } else{
                        if(Map[i-j] != matrix[i][j]){
                            return false;
                        }
                    }
                }
            }
        
            return true;
        }
};