class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> Sol;
        
        for(int i=0; i<nums1.size(); i++){
            int Val = 0;
            for(auto itr = find(nums2.begin(), nums2.end(), nums1[i]); itr!= nums2.end(); itr++){
                if(*itr > nums1[i]){
                    Val = *itr;
                    break;
                }
            }
            if(Val == 0){
                Sol.push_back(-1);
            } else{
                Sol.push_back(Val);    
            }
        }
        
        return Sol;
    }
};