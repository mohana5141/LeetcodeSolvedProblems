class Solution {
public:
    string greatestLetter(string s) {
        set<char> word(s.begin(),s.end());
        
        for(char ch='Z';ch>='A';ch--){
            if(word.count(ch) && word.count(ch+32)){
                return string(1, ch);
            }
        }
        return "";
    }
};