class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int totalscore=0,counter=0;
        for(auto x: events){
            if(counter==10){
                break;
            }
            if(x=="WD"||x=="NB"){
                totalscore+=1;
            }
            else if(x=="W"){
                if(counter<10){
                    counter+=1;
                }
                
            }
            else{
                totalscore+=stoi(x);
            }
        }
        return {totalscore,counter};
    }
};