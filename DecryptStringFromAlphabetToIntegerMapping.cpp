class Solution {
public:
    string freqAlphabets(string s) {
        string Sol="";
    
        for(int i=0;i<s.length();) {
            if(i+2<s.length() && s[i+2]=='#') {
                int code=(s[i]-'0')*10+(s[i+1]-'0');
                Sol+=char(code+'a'-1);
                i+=3;
            }
            else {
                Sol+=char(s[i]-'0'-1+'a');
                ++i;
            }
        }
        return Sol;
    }
};