class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int mid=nums.size()/2;
        if(count(nums.begin(),nums.end(),nums[mid])==1){
            return true;
        }
        return false;
    }
};