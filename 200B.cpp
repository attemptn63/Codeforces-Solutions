#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi pair<int,int>
#define s second
#define f first
main(){
    int n;cin>>n;
    double ans=0;
    for(int i = 0;i<n;i++){
        int a;cin>>a;
        ans+=a;
    }
    cout<<ans/n;
}
