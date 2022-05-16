class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        for(int i=0;i<numRows;i++){
            vector<int> n;
            for(int j=0;j<i+1;j++){
                if(j==0 || j==i){
                    n.push_back(1);
                    // pascal[i][j] = 1;
                }else{
                    n.push_back(pascal[i-1][j-1]+pascal[i-1][j]);
                }
            }
            pascal.push_back(n);
        }
        return pascal;
    }
};
