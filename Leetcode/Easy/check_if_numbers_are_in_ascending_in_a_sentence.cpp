class Solution {
public:
    int atoi(string s){
        int num=0;
        for(int i=0; s[i]!='\0'; i++){
            num = num*10 + (s[i]-'0');
        }
        return num;
    }
    
    bool areNumbersAscending(string s) {
        string temp="";
        int prev=-1, num;
        for(int i=0; s[i]!='\0'; i++){
            if(s[i]>='0' && s[i]<='9'){
                temp += s[i];
            }
            else if(temp!=""){
                num = stoi(temp);
                if(num<=prev){
                    return false;
                }
                prev = num;
                temp = "";
            }
        }
        if(temp!=""){
            num = stoi(temp);
            if(num<=prev){
                return false;
            }
        }
        return true;
    }
};
