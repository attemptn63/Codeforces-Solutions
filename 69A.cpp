#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
typedef pair<int,int>pi;
int32_t main(){
    speed
    int n;cin>>n;
    int xs = 0,ys=0,zs=0;
    for(int i = 0;i<n;i++){
        int x,y,z;cin>>x>>y>>z;
        xs+=x;
        ys+=y;
        zs+=z;
    }
    if(xs==0&&ys==0&&zs==0)cout<<"YES";
    else cout<<"NO";
}
