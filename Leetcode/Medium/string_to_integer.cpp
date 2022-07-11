class Solution {
public:
    bool isDigit(char ch){
        return (ch>='0' && ch<='9');
    }
    
    int myAtoi(string s) {
        bool positive=true;
        int num=0, i=0, digit;
        while(s[i]==' '){
            i++;
        }
        if(s[i]=='-'){
            positive=false;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        while(isDigit(s[i])){
            digit = s[i]-'0';
            if(num>INT_MAX/10 || (num==INT_MAX/10 && digit>7))
                return positive?INT_MAX:INT_MIN;
            
            num = num*10 + digit;
            i++;
        }
        return positive?num:-1*num;
    }
};
