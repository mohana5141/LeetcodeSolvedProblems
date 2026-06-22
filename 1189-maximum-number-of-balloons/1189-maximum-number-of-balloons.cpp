class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s="balloon";
        
        map<char,int> freq;
        for(char ch:text){
            
            freq[ch]+=1;
            
        }
        return min({freq['b'],freq['a'],freq['l']/2,freq['o']/2,freq['n']});
           
    }
};