class Solution {
public:
    int countSeniors(vector<string>& details) {
        string age="";
        int cnt=0;
        for(int i=0;i<details.size();i++){
            age=details[i].substr(11,2);
            int res=stoi(age);
            if(res>60){
                cnt+=1;
            }
        }
        return cnt;
    }
};