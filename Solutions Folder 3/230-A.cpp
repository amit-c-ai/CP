#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    vector<int> a;
    vector<int> b;
    string ans="YES";
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
        cin>>y;
        b.push_back(y);
    }
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=a[i];
    }
    sort(temp,temp+n);
    for(int i=0;i<n;i++){
        if(s>temp[i]){
           auto it = find(a.begin(), a.end(), temp[i]);
           int index = it - a.begin();
           a[index] = 0;
            s += b[index];
        }

        else{
            ans="NO";
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}