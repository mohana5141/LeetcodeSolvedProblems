#include <algorithm>

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());

        for (int i = 0; i < nums.size(); i++) {
            int t = -nums[i];

            if (find(nums.begin(), nums.end(), t) != nums.end()) {
                return nums[i];
            }
        }

        return -1;
    }
};