class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        unsigned int num=0, temp=x;
        while(temp){
            num = num*10 + (temp%10);
            temp = temp/10;
        }
        return num==x;
    }
};
