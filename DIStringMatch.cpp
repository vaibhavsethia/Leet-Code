class Solution {
public:
    vector<int> diStringMatch(string S) {
        int Last = S.length();
        int First = 0;
        vector<int> Sol;
        
        for(int i = 0; i < S.length(); i++){
            if(S[i] == 'I'){
                Sol.push_back(First++);
            } else{
                Sol.push_back(Last--);
            }
        }
        Sol.push_back(First);
        
        return Sol;
    }
};