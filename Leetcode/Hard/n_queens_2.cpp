class Solution {
int count=0;
public:
    bool isSafe(vector<string> board, int row, int col, int n){
        int r = row;
        int c = col;
        
        while(row>=0 && col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row--;
            col--;
        }
        
        col = c;
        row = r;
        while(col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            col--;
        }
        
        col = c;
        row = r;
        while(row<n && col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row++;
            col--;
        }
        
        return true;
    }
    
public:
    void solve(vector<string> &board, int col, int n){
        if(col>=n){
            // ans.push_back(board);
            count++;
            return;
        }
        
        for(int row=0; row<n; row++){
            if(isSafe(board, row, col, n)){
                board[row][col] = 'Q';
                solve(board, col+1, n);
                board[row][col] = '.';
            }
        }
    }
    
    
public:
    int totalNQueens(int n) {
        // vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for(int i=0; i<n; i++){
            board[i] = s;
        }
        solve(board, 0, n);
        return count;       
    }
};
