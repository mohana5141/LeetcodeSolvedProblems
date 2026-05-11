class Solution {
public:
    int alternateDigitSum(int n) {
        int temp=n;
        string num=to_string(temp);
        int length=num.length();
        int sign=1;
        if(length%2==0){
            sign=-1;
        }
        int res=0;
        while(n>0){
            int x=n%10;
            res+=x*sign;
            n/=10;
            if(sign==1){
                sign=-1;
            }
            else{
                sign=1;
            }
        }
        return res;
    }
};