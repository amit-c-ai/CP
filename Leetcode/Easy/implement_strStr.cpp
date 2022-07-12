class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle==""){
            return 0;
        }
        int n=needle.length(), h=haystack.length();
        if(h<n || (h==n && needle!=haystack)){
            return -1;
        }
        for(int i=0; i<=h-n; i++){
            if(haystack[i]==needle[0]){
                if(needle==haystack.substr(i, n)){
                    return i;
                }
            }
        }
        return -1;
    }
};
