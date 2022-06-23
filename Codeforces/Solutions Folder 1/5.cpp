#include<iostream>
#define NOT_EQUAL a!=b && a!=c && a!=d && b!=c && b!=d && c!=d
using namespace std;
int main(void){
	int y, i, a, b, c, d, temp;
	cin>>y;
	i = y+1;
	while(i>y){
		temp = i;
		d = temp%10; temp=temp/10;
		c = temp%10; temp=temp/10;
		b = temp%10; temp=temp/10;
		a = temp;
		if(NOT_EQUAL){
			cout<<i;
			break;
		}
		i++;
	}
	return 0;	
}
