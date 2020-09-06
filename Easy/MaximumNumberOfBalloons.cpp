class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int> Map;
        int Sol = 0;
        
        for(int i=0; i<text.length(); i++){
            Map[text[i]]++;
        }
        
        return min(Map['b'], min(Map['a'], min(Map['l']/2, min(Map['o']/2, Map['n']))));
    }
};