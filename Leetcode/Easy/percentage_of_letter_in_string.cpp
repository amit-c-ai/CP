class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count=0, len=0;
        for(int i=0; s[i]!='\0'; i++){
            if(s[i]==letter){
                count++;
            } len++;
        }
        return (count*100)/len;
    }
};
