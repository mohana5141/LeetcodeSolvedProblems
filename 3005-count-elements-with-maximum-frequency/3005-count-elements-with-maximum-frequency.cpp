class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(auto i: nums){
            freq[i]++;
        }

        int max_freq=0;
        for(auto it: freq){
            if(it.second > max_freq){
                max_freq=it.second;
            }
        }
        int cnt=0;
        for(auto it: freq){
            if(it.second == max_freq){
                cnt += it.second;
            }
        }
        return cnt;
    }
};