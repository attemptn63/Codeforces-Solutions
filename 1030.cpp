#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi pair<int,int>
#define s second
#define f first
main(){
    int n;cin>>n;
    int a=0;
    for(int i = 0;i<n;i++){
        int b;cin>>b;
        a+=b;
    }
    if(a==0)cout<<"EASY";
    else cout<<"HARD";
}
