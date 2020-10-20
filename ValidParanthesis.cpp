class Solution {
public:
    bool isValid(string s) {
        map<char, int> Map {
        {'(', 1},
        {')', 2},
        {'{', 3},
        {'}', 4},
        {'[', 5},
        {']', 6}
    };
  
    stack <char> S;
    
    for(char c : s) {
        if(Map[c] % 2 != 0)
            S.push(c);
        
        else {
            if(S.empty() || Map[c] != Map[S.top()] + 1)
                return false;
            S.pop();
        }
    }
    
    return S.size() == 0;
    }
};