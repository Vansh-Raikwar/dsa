class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col , char d){
        //horizontal
        for(int i=0;i<9;i++){
            if(board[row][i]==d){
                return false;
            }
        }
        //vertical
        for(int i=0;i<9;i++){
            if(board[i][col]==d){
                return false;
            }
        }
        //grid
        int st = (row/3)*3;
        int end = (col/3)*3;
        for(int i = st;i<st+3;i++){
            for(int j=end;j<end+3;j++){
                if(board[i][j]==d){
                    return false;
                }
            }
        }
        return true;
    }
    bool help(vector<vector<char>>& board, int row, int col){
        if(row==9){
            return true;
        }
        int nRow = row, nCol = col+1;
        if(nCol==9){
            nRow=row+1;
            nCol=0;
        }
        if(board[row][col]!='.'){
            return help(board,nRow,nCol);
        }
        for(char i='1';i<='9';i++){
            if(isSafe(board, row, col, i)){
                board[row][col]=i;
                if(help(board,nRow,nCol)){
                    return true;
                }
                board[row][col]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        help(board,0,0);
    }
};