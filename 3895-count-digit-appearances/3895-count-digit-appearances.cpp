class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        long long cnt=0;
        for(long long i=0;i<nums.size();i++){
            long long d=nums[i];
            while(d>0){
                if(d%10==digit){
                    cnt++;
                }
                d/=10;
            }
        }
        return cnt;
    }
};