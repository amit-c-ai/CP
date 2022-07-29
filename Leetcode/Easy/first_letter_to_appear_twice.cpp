class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> dp(27, 0);
        for(int i=0; s[i]!='\0'; i++){
            dp[s[i]-'a']++;
            if(dp[s[i]-'a']==2){
                return s[i];
            }
        }
        return '.';
    }
};
