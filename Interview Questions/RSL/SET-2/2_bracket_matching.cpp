// 11] Given an expression string exp, write a program to examine whether
// the pairs and the orders of “{“, “}”, “(“, “)”, “[“, “]” are correct in
// exp.

#include<bits/stdc++.h>
using namespace std;

bool solve(string s){
    int stack[100], top=-1;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]=='[' || s[i]=='{' || s[i]=='('){
            top++;
            stack[top]=s[i];
            continue;
        }
        if(top==-1){
            return false;
        }
        else{
            switch (s[i]){
                case ')':
                    if(stack[top] != '('){
                        return false;
                    }
                    top--; break;
                case '}':
                    if(stack[top] != '{'){
                        return false;
                    }
                    top--; break;
                case ']':
                    if(stack[top] != '['){
                        return false;
                    }
                    top--; break;
                default:
                    return false;
            }
        }
    }
    if(top != -1){
        return false;
    }
    return true;
}

int main(){
    string s="[{()()}()]";
    cout<<solve(s);
    return 0;
}