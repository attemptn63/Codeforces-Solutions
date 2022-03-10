#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
typedef pair<int,int>pi;
int32_t main(){
    speed
    int n;cin>>n;
    int ans = 0,d = 0;
    for(int i = 0;i<n;i++){
        int b,c;cin>>b>>c;
        d-=b;d+=c;
        ans = max(ans,d);
    }
    cout<<ans;
}
