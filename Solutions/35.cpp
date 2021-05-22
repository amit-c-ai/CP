#include<bits/stdc++.h>
using namespace std;
int main(void){
	float ab, bc, ca, a, b, c;
	int total;
	cin>>ab>>bc>>ca;
	a = sqrt((ab/bc)*ca);
	b = ab/a;
	c = ca/a;
	total = 4*(a+b+c);
	cout<<total;
	return 0;
}
