class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> ans;
        string res="";
        for(auto ch: sentence){
            if(ch == ' '){
                ans.push_back(res);
                res.clear();
            }
            else{
                res+=ch;
            }
        }
        ans.push_back(res);
        int n=searchWord.length();
        for(int i=0;i<ans.size();i++){
            if(ans[i].length()>=n && ans[i].substr(0,n)==searchWord){
                return i+1;
            }
        }
        return -1;
    }
};