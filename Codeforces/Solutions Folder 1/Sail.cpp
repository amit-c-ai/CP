#include<bits/stdc++.h>
using namespace std;
int main(void){
	int t, sx, sy, ex, ey, time(-1);
	string wind;
	cin>>t>>sx>>sy>>ex>>ey>>wind;
	
	for(int i=0; i<t; i++){
		switch (wind[i]){
			case 'E':
				if(sx < ex)
					sx++;
				break;
			case 'W':
				if(sx > ex)
					sx--;
				break;
			case 'N':
				if(sy < ey)
					sy++;
				break;
			case 'S':
				if(sy > ey)
					sy--;
				break;
			default:
				break;
		}
		if(sx==ex && sy==ey){
			time = i+1;
			break;
		}
	}
	
	cout<<time;
	return 0;
}
