class Solution {
public:
    bool validateCol(vector<vector<char>>& board, int col,int row){
        for(int i=0;i<9;i++){
            if(i==row){
                continue;
            }
            if(board[i][col]==board[row][col]){
                return false;
            }
        }
        return true;
    }
    bool validateRow(vector<vector<char>>& board, int col,int row){
        for(int i=0;i<9;i++){
            if(i==col){
                continue;
            }
            if(board[row][i]==board[row][col]){
                return false;
            }
        }
        return true;
    }
    bool validateBox(vector<vector<char>>& board, int col,int row){
        int i = (row/3)*3;
        int j = (col/3)*3;
        for(int k=0;k<3;k++){
            for(int l=0;l<3;l++){
                if((i+k)==row && (j+l)==col){
                    continue;
                }
                if(board[i+k][j+l]==board[row][col]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(validateCol(board,j,i) && validateRow(board,j,i) && validateBox(board,j,i)){
                        continue;
                    }else{
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
