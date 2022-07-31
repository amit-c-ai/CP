class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mp;
        map<char, int> dp;
        for(int i=0; s[i]!='\0'; ++i){
            if(mp.find(s[i])!=mp.end()){
                s[i] = mp[s[i]];
            }
            else{
                if(dp.find(t[i]) != dp.end()){
                    return false;
                }
                mp[s[i]] = t[i];
                dp[t[i]] = 1;
                s[i] = mp[s[i]];
            }
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;
    }
};
