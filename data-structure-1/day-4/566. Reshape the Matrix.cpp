class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if((m*n!=r*c) || (m==r && n==c)){
            return mat;
        }
        int C,i=0,j=0;
        vector<vector<int>> newMat;
        while(r--){
            C = c;
            vector<int> col;
            while(C--){
                
                col.push_back(mat[i][j]);
                if(j==n-1){
                    i++;
                    j=0;
                }else{
                    j++;
                }
            }
            newMat.push_back(col);
        }
        return newMat;
    }
};
