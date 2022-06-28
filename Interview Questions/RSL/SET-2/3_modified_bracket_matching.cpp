// 11] Given an expression string exp, write a program to examine whether
// the pairs and the orders of “{“, “}”, “(“, “)”, “[“, “]” are correct in
// exp.
// If the given string is balanced then return the same string.
// If the given string is unbalanced then balance the string and then return
// it.

#include<bits/stdc++.h>
using namespace std;

void solve(string s){
    char stack[100]={'.'}, top=-1, curr=-1;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]=='[' || s[i]=='{' || s[i]=='('){
            top++; curr++;
            stack[curr]=s[i];
            continue;
        }
        if(top==-1){
            break;
        }
        else{
            switch (s[i]){
                case ')':
                    if(stack[top] != '('){
                        stack[++curr]='(';
                        stack[++curr]=')';
                        top--; break;
                    }
                case '}':
                    if(stack[top] != '{'){
                        stack[++curr]='{';
                        stack[++curr]='}';
                        top--; break;
                    }
                case ']':
                    if(stack[top] != '['){
                        stack[++curr]='[';
                        stack[++curr]=']';
                        top--; break;
                    }
            }
        }
    }
    while(top != -1){
        if(s[top--]=='('){
            s[++curr]=')';
        }
        else if(s[top--]=='{'){
            s[++curr]='}';
        }
        else if(s[top--]=='['){
            s[++curr]='}';
        }
    }
    for(int i=0; stack[i] != '.'; i++){
        cout<<stack[i];
    }
}

int main(){
    string s="[{())}()]";
    solve(s);
    return 0;
}