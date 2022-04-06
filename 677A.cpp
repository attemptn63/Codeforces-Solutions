#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi pair<int,int>
#define speed ios_base::sync_with_stdio(NULL);cin.tie(0);
main(){
    speed
    int n,h;cin>>n>>h;
    int ans = 0;
    for(int i = 0;i<n;i++){
        int a;cin>>a;
        if(a>h)ans+=2;
        else ans++;
    }
    cout<<ans;
}
