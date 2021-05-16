#include<bits/stdc++.h>
#include<string>
using namespace std;
#define all(x) x.begin(), x.end()
int main(void){
	int i, j, found=0;
	string s1, s2, s3, s1_new, s;
	cin>>s1>>s2>>s3;
	for(i=0; i<int(s1.length()); i++){
		for(j=0; j<int(s3.length()); j++){
			if(s1[i]==s3[j]){
				s1_new.append( s+=s3[j] );
				s.erase(s.begin());
				s3.erase(s3.begin()+j);
				found=1;
				break;
			}
		}
		if(found==1){
			found=0;
		}
		else{
			cout<<"NO";
			exit(0);
		}
	}
	sort(all(s2)); sort(all(s3));
	if(s2==s3)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
