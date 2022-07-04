//21] Write a function that takes input as a String. It should return true
//if all characters in the
//string are unique, false otherwise. You cannot use additional data
//structure. (a-z and 1-9. No
//Unicode/Special character/Uppercase characters)
//This method works if string contains only alphabets


#include<bits/stdc++.h>
using namespace std;

bool solve(string s){
	int check=0, bitIndex;
	for(int i=0; s[i]!='\0'; i++){
		bitIndex = s[i]-'0';
		if((check & (1<<bitIndex)) > 0){
			return false;
		}
		else{
			check = (check | (1<<bitIndex));
		}
	}
	return true;
}

int main(){
	string s="Amazon";
	if(solve(s)){
		cout<<"It is a unique string";
	}
	else{
		cout<<"It is not a unique string";
	}
	return 0;
}
