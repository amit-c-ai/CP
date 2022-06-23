#include<bits/stdc++.h>
using namespace std;
int main(void){
	vector<vector<int>> matrix;
	vector<int> q, tmp;
	q.push_back(1);
	q.push_back(2);
	q.push_back(3);
	q.push_back(4);
	q.push_back(5);
	long long temp, lol, max=0;
	for(int i=0; i<5; i++){
		vector<int> take;
		for(int j=0; j<5; j++){
			cin>>temp;
			take.push_back(temp);
		}
		matrix.push_back(take);
	}	
	
	do{
		tmp = q;
		lol = 0;
		while(!tmp.empty()){
			for(int i=0; i<tmp.size()-1; i+=2){
				lol += ( matrix[tmp[i]-1][tmp[i+1]-1] + matrix[tmp[i+1]-1][tmp[i]-1] );
			}
			tmp.erase(tmp.begin(), tmp.begin()+1);
		}
		if(lol>max)
			max=lol;
	}while(next_permutation(q.begin(), q.end()));
	
	cout<<max<<"\n";
	return 0;
}
