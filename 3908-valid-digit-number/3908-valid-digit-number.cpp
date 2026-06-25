class Solution {
public:
    bool validDigit(int n, int x) {
        string s=to_string(n);
        bool flag=false;
        if(s[0]-'0' ==x){
            return false;
        }
        for(int i=1;i<s.length();i++){
            if(s[i]-'0' == x){
                flag=true;
                break;
            }
        }
        
        
        return flag;
    }
};