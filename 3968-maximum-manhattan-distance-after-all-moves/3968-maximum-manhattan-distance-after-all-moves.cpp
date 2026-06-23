class Solution {
public:
    int maxDistance(string moves) {
        int cnt_r=0,cnt_l=0,cnt_u=0,cnt_d=0,cnt=0;
        for(char ch:moves){
            if(ch=='L'){
                cnt_l+=1;
            }
            else if(ch=='R'){
                cnt_r+=1;
            }
            else if(ch=='U'){
                cnt_u+=1;
            }
            else if(ch=='D'){
                cnt_d+=1;
            }
            else if(ch=='_'){
                cnt+=1;
            }

        }
        return abs(cnt_l-cnt_r)+abs(cnt_u-cnt_d)+cnt;
    }
};