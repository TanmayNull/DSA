class Solution {
public:
    bool isValid(vector<vector<char>>& board,int row, int col,char k){
        int duprow=row;
        int dupcol=col;
        while(row>=0){
            if(board[row][col]==k) return false;
            row--;
        }
        row = duprow;
        col = dupcol;
        while(row<9){
            if(board[row][col]==k) return false;
            row++;
        }
        row = duprow;
        col = dupcol;
        while(col>=0){
            if(board[row][col]==k) return false;
            col--;
        }
        row = duprow;
        col = dupcol;
        while(col<9){
            if(board[row][col]==k) return false;
            col++;
        }
        row = duprow;
        col = dupcol;
    for(int i=0;i<9;i++){
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==k)
        return false;
    }
    return true;
    }
    bool helper(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char k='1';k<='9';k++){
                    if(isValid(board,i,j,k))
                    {
                        board[i][j]=k;
                        if(helper(board)==true)
                        return true;
                        else
                        board[i][j]='.';
                    }
                    }
                    return false;
                }
            }

        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(board);
    }
};