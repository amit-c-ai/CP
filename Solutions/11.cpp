#include<iostream>
bool isPrime(int a){
	int k;
	for(k=2;k<=a/2;k++) 
		if(a%k==0)
			return false; 
	return true;
}
	
using namespace std;
int main(void){
	int n, m, i, k, prime;
	cin>>n>>m;
	for(i=n+1; 1; i++){
		if(isPrime(i)){
			prime = i;
			break;
		}
	}
	if(prime==m)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
