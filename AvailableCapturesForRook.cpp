class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int X, Y;
        
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(board[i][j] == 'R'){
                    X = i;
                    Y = j;
                }
            }
        }
        
        int i = X+1, j = Y, Sol = 0;
        
        while(i<8){
            if(board[i][j] == 'B'){
                break;
            }
            if(board[i][j] == 'p'){
                Sol++;
                break;
            }
            
            i++;
        }
        i=X-1;
        while(i>=0){
            if(board[i][j] == 'B'){
                break;
            }
            if(board[i][j] == 'p'){
                Sol++;
                break;
            }
            
            i--;
        }
        
        i = X, j = Y+1;
        
        while(j<8){
            if(board[i][j] == 'B'){
                break;
            }
            if(board[i][j] == 'p'){
                Sol++;
                break;
            }
            
            j++;
        }
        j=Y-1;
        while(j>=0){
            if(board[i][j] == 'B'){
                break;
            }
            if(board[i][j] == 'p'){
                Sol++;
                break;
            }
            
            j--;
        }
        
        return Sol;
    }
};