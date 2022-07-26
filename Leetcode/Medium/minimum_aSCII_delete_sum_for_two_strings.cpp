class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int n=s1.length()+1, m=s2.length()+1, x, y;
        vector<vector<int>> dp(n, vector<int>(m, 0));
        
        for(int i=1; i<n; i++){
            dp[i][0] = dp[i-1][0] + (int)s1[i-1];
        }
        for(int j=1; j<m; j++){
            dp[0][j] = dp[0][j-1] + (int)s2[j-1];
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    x = dp[i-1][j] + (int)s1[i-1];
                    y = dp[i][j-1] + (int)s2[j-1];
                    dp[i][j] = min(x, y);
                }
            }
        }
        return dp[n-1][m-1];
    }
};
