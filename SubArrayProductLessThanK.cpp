class Solution {
public:
	int numSubarrayProductLessThanK(vector<int>& nums, int k) {
		if (nums.size() == 0 || k == 0)
			return 0;

		int Sol = 0, CurrProduct = 1;
        
        for (int End = 0, Start = 0; End < nums.size(); End++) {
            CurrProduct *= nums[End];
            while (Start < End && CurrProduct >= k)
                CurrProduct /= nums[Start++];

            if (CurrProduct < k)
                Sol += End - Start + 1;
        }
		return Sol;
	}
};