class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size(), flag=1, minLen=INT_MAX, len;
        if(n==1){
            return strs[0];
        }
        for(int i=0; i<n; i++){
            len = strs[i].length();
            if(len < minLen){
                minLen = len;
            }
        }
        string ans = "";
        for(int i=0; i<minLen; i++){
            for(int j=0; j<n-1; j++){
                if(strs[j][i] != strs[j+1][i]){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                ans += strs[0][i];
            }
        }
        return ans;
    }
};
