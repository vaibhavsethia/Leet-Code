class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> Chars;
        
        for(int i=0; i<s.length(); i++){
            Chars[s[i]]++;
        }
        for(int i=0; i<t.length(); i++){
            Chars[t[i]]--;
        }
        
        for(auto itr=Chars.begin(); itr!=Chars.end(); itr++){
            if(itr->second != 0){
                return false;
            }
        }
        
        return true;
    }
};