class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int cntx=0,cnty=0;
        string middle="";
        for(auto ch:s){
            if(ch==x){
                cntx++;
            }
            else if(ch==y){
                cnty++;
            }
            else{
                middle+=ch;
            }
        }
        string res="";
        while(cnty--){
            res+=y;
        }
        res+=middle;
        while(cntx--){
            res+=x;
        }
        return res;
    }
};