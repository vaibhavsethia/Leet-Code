class Solution {
public:
    bool judgeCircle(string moves) {
        map<char, int> Moves;
        
        for(int i=0; i<moves.length(); i++){
            if(Moves.find(moves[i])==Moves.end()){
                Moves.insert(make_pair(moves[i], 1));
            } else{
                Moves[moves[i]]++;
            }
        }
        
        if(Moves['U']==Moves['D'] && Moves['R']==Moves['L']){
            return true;
        }
        
        return false;
    }
};