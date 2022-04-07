#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi pair<int,int>
#define s second
#define f first
main(){
    int n;cin>>n;
    int ans = 0;
    for(int i = 0;i<n;i++){
        int a,b;cin>>a>>b;
        if(a+2<=b)ans++;
    }
    cout<<ans;
}
