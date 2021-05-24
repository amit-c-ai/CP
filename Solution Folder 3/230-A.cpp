// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int s,n;
//     cin>>s>>n;
//     int a[n],b[n];
//     string ans="YES";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         cin>>b[i];
//     }
//     int temp[n];
//     for(int i=0;i<n;i++){
//         temp[i]=a[i];
//     }
//     sort(temp,temp+n);
//     for(int i=0;i<n;i++){
//         if(s>temp[i]){
//            int itr = find(a, a + n, temp[i]);
//             s += b[itr];
//         }

//         else{
//             ans="NO";
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }


// // auto itr = find(a, a + n, elem);

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
            // cout<<s<<endl;
            // cout<<i<<endl;
            // cout<<a[index]<<endl;
        }

        else{
            ans="NO";
            // cout<<s<<endl;
            // cout<<i<<endl;
            break;
        }
    }
    // cout<<s<<endl;
    cout<<ans<<endl;
    return 0;
}