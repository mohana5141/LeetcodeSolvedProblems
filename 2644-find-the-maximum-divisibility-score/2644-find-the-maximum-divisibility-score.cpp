class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int bestdivisor=INT_MAX,max=-1;
        for(auto div:divisors){
            int cnt=0;
            for(auto num:nums){
                if(num%div==0){
                    cnt++;
                }
            }
            if(cnt>max){
                max=cnt;
                bestdivisor=div;
            }
            else if(cnt==max){
                bestdivisor=min(bestdivisor,div);
            }
        }
        return bestdivisor;

    }
};