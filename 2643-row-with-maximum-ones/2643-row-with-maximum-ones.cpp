class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max_ones=INT_MIN,min_row=INT_MAX,ones=0;
        for(int i=0;i<mat.size();i++){
            ones=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    ones+=1;
                }
            }
            if(ones>max_ones){
                max_ones=ones;
                min_row=i;
            }
            else if(ones==max_ones){
                if(i<min_row){
                    min_row=i;
                }
            }
        }
        return {min_row,max_ones};
    }
};