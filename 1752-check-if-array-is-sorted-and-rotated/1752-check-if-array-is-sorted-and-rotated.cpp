class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int check = 0;
        for(int i = 0; i < n-1; i++){
            if(nums[i] > nums[i+1]) check++;
        }

        if((check == 0) || (check == 1 && nums[0] >= nums[n-1])) return true;

        return false;
    }
};