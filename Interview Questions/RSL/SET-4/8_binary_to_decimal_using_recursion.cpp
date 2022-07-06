#include<bits/stdc++.h>
using namespace std;

int solve(int num, int prod){
	if(num<=0){
		return 0;
	}
	return (num%10)*prod + solve(num/10, prod*2);
}

int main(){
	int num=10101001;
	cout<<solve(num, 1);
	return 0;
}
