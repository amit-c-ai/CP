class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> dp(26, 0);
        int i;
        for(i=0; s[i]!='\0'; ++i){
            dp[s[i]-'a']++;
        }
        for(i=0; t[i]!='\0'; ++i){
            dp[t[i]-'a']--;
        }
        for(i=0; i<26; i++){
            if(dp[i] != 0){
                return false;
            }
        }
        return true;
    }
};
