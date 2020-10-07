class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        int count = 0;
        
        while (i < j) {
            if (s[i] != s[j]) {
                count++;
                if (j - i == 1 && count == 1) return true;
                if (count > 1) return false;
                
                if (s[i + 1] == s[j] && s[i + 2] == s[j - 1]) i++;
                else if (s[i] == s[j - 1] && s[i + 1] == s[j - 2]) j--;
            }
            else {
                i++;
                j--;
            }
        }
        return true;
    }
};