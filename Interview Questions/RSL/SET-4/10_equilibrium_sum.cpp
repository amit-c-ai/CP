//32] Find equilibrium point(index) in given array. Equilibrium point is
//the element from where sum of all elements left to it is equal to sum of
//all elements right to it.

#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
	int low=0, high=n-1, sumleft=0, sumright=0;
	while(low<=high){
		sumleft += arr[low];
		sumright += arr[high];
		if(sumleft<sumright){
			low++;
		}
		else if(sumright<sumleft){
			high--;
		}
		else{
			low++; high--;
		}
	}
	if(sumleft==sumright){
		cout<<"Equilibrium point: "<<low<<"(index:"<<low-1<<")";
	}
	else{
		cout<<"No equilibrium point";
	}
}

int main(){
	int arr[]={1, 2, 3, 4, 3, 2, 1, 0};
	solve(arr, 8);
	return 0;
}
