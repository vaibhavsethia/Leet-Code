class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(ans.count(nums[i])==0)
                ans.insert(nums[i]);
            else
                return true;
        }
        return false;
    }
};