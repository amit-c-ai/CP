class Solution {
public: 
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), len=0, left=0, right=0;
        vector<int> dp(256, -1);
        
        while(right<n){
            if(dp[s[right]] != -1){
                left = max(dp[s[right]]+1, left);
            }
            dp[s[right]] = right;
            len = max(len, right-left+1);
            right++;
        }
        return len;
    }
};