class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto num: nums){
            if(num%2==0 && freq[num]==1){
                return num;
            }
        }
        return -1;
    }
};