class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int ele=-1;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]>nums1[i]){
                    break;
                }
                else if(nums2[j]==nums1[i]){
                    return nums2[j];
                    
                }
            }
        }
        return -1;
    }
};