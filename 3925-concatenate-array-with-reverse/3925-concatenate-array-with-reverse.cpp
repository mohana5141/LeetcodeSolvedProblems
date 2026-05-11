class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> b = nums;
        reverse(nums.begin(),nums.end());
        b.insert(b.end(),nums.begin(),nums.end());
        return b;
    }
};