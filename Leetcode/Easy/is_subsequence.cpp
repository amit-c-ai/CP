class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ptr1=0;
        for(int i=0; t[i]!='\0'; ++i){
            if(t[i]==s[ptr1]){
                ptr1++;
            }
        }
        if(ptr1 == s.length()){
            return true;
        }
        return false;
    }
};
