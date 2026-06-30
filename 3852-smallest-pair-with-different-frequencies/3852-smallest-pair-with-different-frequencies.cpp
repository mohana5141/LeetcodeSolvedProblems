class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int,int> freq;
        for(auto x: nums){
            freq[x]++;
        }
        vector<pair<int,int>> v;
        for(auto it:freq){
            v.push_back({it.first,it.second});
        }
        int n=v.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(v[i].second!=v[j].second){
                    return {v[i].first,v[j].first};
                }
            }
        }
        return {-1,-1};
    }
};