class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1, count=0, flag=1;
        while(i>=0 && (s[i]!=' ' || flag==1)){
            if(s[i]!=' ' && flag==1){
                flag=0;
            }
            if(flag==0){
                ++count;
            }
            --i;
        }
        return count;
    }
};
