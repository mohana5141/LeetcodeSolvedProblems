class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int> diff(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            int digit = nums[i];
            int mn = INT_MAX;
            int mx = INT_MIN;

            if (digit == 0) {
                mn = mx = 0;
            }

            while (digit > 0) {
                int d = digit % 10;
                if (d < mn) mn = d;
                if (d > mx) mx = d;
                digit /= 10;
            }

            diff[i] = mx - mn;
        }

        int maxDiff = *max_element(diff.begin(), diff.end());

        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (diff[i] == maxDiff) {
                sum += nums[i];
            }
        }

        return sum;
    }
};