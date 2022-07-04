// 15] find the angle between hr hand and min hand of a clock

#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=4; i>=0; i--){
    	for(int j=0; j<i; j++){
    		cout<<"*";
		}
		if(i!=0){
			cout<<endl;	
		}
	}
	for(int i=2; i<=4; i++){
		for(int j=0; j<i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
    return 0;
}
