class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0, left=0, right=0, n=s.length();
        vector<int> dp(256, -1);
        while(right<n){
            if(dp[s[right]] != -1){
                left = max(left, dp[s[right]]+1);
            }
            dp[s[right]]=right;
            len = max(right-left+1, len);
            right++;
        }
        return len;
    }
};
