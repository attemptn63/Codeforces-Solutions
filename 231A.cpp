#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
int32_t main()
{
    int n;cin>>n;
    int ans = 0;
    for(int i = 0;i<n;i++){
        int a,b,c;cin>>a>>b>>c;
        if(a+b+c>=2)ans++;
    }
    cout<<ans;
}
