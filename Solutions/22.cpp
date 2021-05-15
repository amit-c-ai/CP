#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int t;
	char str[100];
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>str;
		if(strlen(str)>10){
			cout<<str[0]<<strlen(str)-2<<str[strlen(str)-1]<<endl;
		}
		else{
			cout<<str<<endl;
		}
	}
}
