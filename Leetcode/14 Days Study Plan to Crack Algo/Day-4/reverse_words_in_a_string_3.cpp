class Solution {
public:
    string reverseWords(string s) {
        string temp="", ans="";
        temp += s[0];
        for(int i=1; s[i]!='\0'; i++){
            if(s[i]!=' '){
                temp = s[i]+temp;   
            }
            else{
                ans += temp;
                ans += " ";
                temp="";
            }
        }
        if(temp!=""){
            ans+=temp;
        }
        return ans;
    }
};
