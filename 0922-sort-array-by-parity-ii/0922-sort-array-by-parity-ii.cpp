class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        for(auto num:nums){
            if(num%2==0) even.push_back(num);
            else odd.push_back(num);
        }
        int e=0,o=0;
        for(int i=0;i<nums.size() && e<even.size() || o<odd.size();i++){
            if(i%2==0) nums[i]=even[e++];
            else nums[i]=odd[o++];

        }
        return nums;
        
    }
};