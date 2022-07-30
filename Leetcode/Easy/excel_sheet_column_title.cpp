class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        char c;
        while(columnNumber>26){
            c = char(columnNumber % 26);
            if(c==0){
                c=26;
                columnNumber--;
            }
            ans = char(c+64)+ans;
            columnNumber /= 26;
        }
        return char(columnNumber+64)+ans;
    }
};
