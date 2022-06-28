// 15] find the angle between hr hand and min hand of a clock

#include<bits/stdc++.h>
using namespace std;

void solve(int hr, int min){
    hr += (min/60);
    hr %= 12;
    min %= 60;
    float h = (hr + (float)min/60) * 30;
    float m = min * 6;
    float angle = abs(h-m);
    if(angle>180){
        cout<<360-angle;
    }
    else{
        cout<<angle;
    }
}

int main(){
    int hr=12, min=15;
    solve(hr, min);
    return 0;
}