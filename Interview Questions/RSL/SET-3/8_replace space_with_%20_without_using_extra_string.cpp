//26] input = Raja Software Labs
//output = Raja%20Software%20Labs.
//You are not allowed to use extra string or extra array. You have to
//modify the given input
//string only.

#include<bits/stdc++.h>
using namespace std;

void solve(string s){
	int ptr1=s.length()-1, ptr2=ptr1;
	while(s[ptr1]==' '){
		ptr1--;
	}
	while(ptr1>=0){
		if(s[ptr1]==' '){
			s[ptr2]='0'; ptr2--;
			s[ptr2]='2'; ptr2--;
			s[ptr2]='%'; ptr2--;
			ptr1--;
		}
		else{
			s[ptr2]=s[ptr1];
			ptr1--; ptr2--;
		}
	}
	cout<<s;
}

int main(){
	string s="Raja Software Labs    ";
	solve(s);
	return 0;
}
