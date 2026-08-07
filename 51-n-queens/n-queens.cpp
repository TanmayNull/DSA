class Solution {
public:
    bool isSafe(int col,int row,vector<string>&chess){
        int row2=row;
        int col2=col;
        while(row>=0&&col>=0){
            if(chess[row][col]=='Q')
            return false;
            row--;
            col--;
        }
        row=row2;
        col=col2;
        while(col>=0){
            if(chess[row][col]=='Q')
            return false;
            col--;
        }
        row=row2;
        col=col2;
        while(row < chess.size() && col >= 0){
            if(chess[row][col]=='Q')
            return false;
            row++;
            col--;
        }
        return true;
    }
    void recurse(vector<string>&chess,vector<vector<string>>&ans,int n,int col,int row){
        if(col==n)
        {
            ans.push_back(chess);
            return;
        }
        for(int row=0;row<n;row++){
        if(isSafe(col,row,chess)){
        chess[row][col]='Q';
        recurse(chess,ans,n,col+1,row);
        chess[row][col]='.';
        }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> chess(n, string(n, '.'));
        vector<vector<string>>ans;
        recurse(chess,ans,n,0,0);
        return ans;
    }
};