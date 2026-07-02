class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> set;
        for(auto i: friends){
            set.insert(i);
        }
        vector<int> s;
        for(auto ch: order){
            if(set.find(ch)!=set.end()){
                s.push_back(ch);
            }
        }
        return s;
    }
};