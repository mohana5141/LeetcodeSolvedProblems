class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0,s=0;
        string str=to_string(n);
        for(char ch: str){
            int d=ch-'0';
            if(d>0){
                x=x*10+d;
                s+=d;
            }
        }
        return x*s;
    }
};