#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
typedef pair<int,int>pi;
int32_t main(){
    speed
    int n,k,w,ans = 0;
    cin>>k>>n>>w;
    for(int i = 1;i<=w;i++){
        ans+=k*i;
    }
    if(n>=ans)cout<<0;
    else cout<<ans-n;
}
