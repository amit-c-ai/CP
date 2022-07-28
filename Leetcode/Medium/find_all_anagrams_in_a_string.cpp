class Solution {
public:
    bool checkAnagram(vector<int>& dp, vector<int>& ds){
        for(int i=0; i<26; i++){
            if(dp[i] != ds[i]){
                return false;
            }
        }
        return true;
    }
    
    vector<int> findAnagrams(string s, string p) {
        vector<int> dp(26, 0), ds(26, 0), ans;
        int i, n=p.length(), len=s.length();
        for(i=0; p[i]!='\0'; ++i){
            dp[p[i]-'a']++;
        }
        int k=n; i=0;
        while(k-- && i<len){
            ds[s[i++]-'a']++;
        }
        if(checkAnagram(dp, ds)){
            ans.push_back(0);
        }
        int low=0, high=i;
        while(high<len){
            ds[s[low++]-'a']--;
            ds[s[high++]-'a']++;
            if(checkAnagram(dp, ds)){
                ans.push_back(low);
            }
        }
        return ans;
    }
};
