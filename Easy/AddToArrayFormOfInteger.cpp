class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        vector<int> Sol;
        int i = A.size() - 1, j = K, carry = 0;
        
        while(i >= 0 or j > 0 or carry) {
            int first = 0, second = 0;
            if(i >= 0)
                first = A[i--];
            if(j > 0) {
                second = j % 10;
                j /= 10;
            }
            int sum = first + second + carry;
            carry = sum/10;
            Sol.push_back(sum % 10);
        }
        
        reverse(Sol.begin(), Sol.end());
        return Sol;
    }
};