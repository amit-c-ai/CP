class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row=board.size(), col=board[0].size();
        map<int, int> dp;
        for(int i=0; i<row; i++){
            dp.clear();
            for(int j=0; j<col; j++){
                if((board[i][j]-'0' > 9) || (board[i][j]-'0' < 1) || (dp[board[i][j]]>1)){
                    return false;
                }
                dp[board[i][j]]++;
            }
        }
    }
};
