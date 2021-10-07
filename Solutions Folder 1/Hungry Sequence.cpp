#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, count=0; cin>>n;
	int num=1299710;
   	bool pno[num+1];
   	memset(pno, true, sizeof(pno));
   	for (int i = 2; i*i <= num; i++){
    	if (pno[i] == true) {
        	for (int j = i*2; j <= num; j += i)
        		pno[j] = false;
    	}
   }
   for (int i = 2; i<= num; i++){
   		if(pno[i]){
   			if(count==n)
   				return 0;
   			cout<<i<<" ";
   			count++;
	   }
   }
   return 0;
}
