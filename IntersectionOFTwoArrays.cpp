class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> MapA, Temp; 
        vector<int> Sol; 
        
        for(int i=0; i<nums1.size(); i++){
            MapA[nums1[i]] = 1;
        }        
        for(int i=0; i<nums2.size(); i++){
            if(MapA[nums2[i]]>0){
                Temp[nums2[i]] = 1;
            }
        }
        for(int i=0; i<nums2.size(); i++){
            if(Temp[nums2[i]] == 1){
                Sol.push_back(nums2[i]);
                Temp[nums2[i]] = 0;
            }
        }        
        
        return Sol;
    }
};