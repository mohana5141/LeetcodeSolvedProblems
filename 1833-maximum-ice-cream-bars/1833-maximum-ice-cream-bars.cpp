class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int cnt=0;
        sort(costs.begin(),costs.end());
        for(auto cost: costs){
            if(cost<=coins){
                cnt++;
                coins-=cost;
            }
        }
        return cnt;
    }
};