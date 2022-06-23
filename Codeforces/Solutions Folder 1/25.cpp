#include<bits/stdc++.h>
using namespace std;
int min(int a, int b, int c){
   if (a <= b && a <= c)
        return a;
 
    else if (b <= a && b <= c)
        return b;
 
    else
        return c;
}
int main(void){
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	cout<<(min((k*l)/nl , c*d, p/np))/n;
	return 0;
}
