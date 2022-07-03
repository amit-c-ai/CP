//20] stock buy sell to maximize profit

#include<bits/stdc++.h>
using namespace std;

void solve(int prices[], int n){
	int profit=0, min_value=prices[0];
	for(int i=1; i<n; i++){
		if(prices[i]<min_value){
			min_value = prices[i];
		}
		if(prices[i]-min_value > profit){
			profit = prices[i]-min_value;
		}
	}
	cout<<"Profit : "<<profit;
}

int main(){
	int prices[]={2, 3, 8, 56, 78, 1, 5}, n=sizeof(prices)/sizeof(prices[0]);
	solve(prices, n);
	return 0;
}
