class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt=0;
        for(auto ch:words){
            int n=ch.length();
            if(s.substr(0,n)==ch){
                cnt++;
            }
        }
        return cnt;
    }
};